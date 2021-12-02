#include <iostream>  // temporary
#include <cassert>
#include <cstdarg>
#include "semantics.h"
#include "token.h"

/* *** variables *** */

symtab *top_scope = nullptr;
symtab *current_scope = nullptr;
s_function *current_function;
s_interface *current_interface;
s_class *current_class;
s_prototype *current_prototype;

void semantic_assert(bool condition, char const * fmt, ...)
{
   if (condition) return;
   std::cerr << "line " << current_line << ": semantic error, ";
   va_list args;
   va_start(args, fmt);
   vfprintf(stderr, fmt, args);
   std::cerr << std::endl;
   va_end(args);
   exit(1);
}

/* *** semantics constructors and instance methods *** */

s_var::s_var(std::string name, s_type *type) : name(name), type(type) {}

std::string s_var::to_string() const
{
   return name;
}

s_type::s_type(std::string name) : name(name) {}

s_arraytype::s_arraytype(s_type * content_type) :
   s_type(content_type->name+"[]"), content_type(content_type) {}


s_prim::s_prim(std::string name) : s_type(name) {}

std::string s_prim::to_string() const
{
   return name;
}

std::string s_usertype::to_string() const
{
   return "usertype:"+name;
}

s_prototype::s_prototype(std::string name) : name(name)
{

}

std::string s_prototype::to_string() const
{
   return name;
}

s_function::s_function(std::string name) : s_prototype(name) {}

std::string s_function::to_string() const
{
   return name;
}

s_usertype::s_usertype(std::string name) : s_type(name) { defined = false; }

s_class::s_class(std::string name) : s_usertype(name)
{
   defined = true;
   superclass = nullptr;
}

s_interface::s_interface(std::string name) :s_usertype(name)
{
   defined = true;
}

/* *** Global types builtin. *** */
s_prim *semantics_int_type = new s_prim("int");
s_prim *semantics_double_type = new s_prim("double");
s_prim *semantics_bool_type = new s_prim("bool");
s_prim *semantics_string_type = new s_prim("string");
s_prim *semantics_void_type = new s_prim("void");

/* *** symtab *** */

symtab::symtab(symtab *outer) : outer(outer)
{
   static int seq = 1;
   name = "symtab-" + std::to_string(seq++);
}

std::string symtab::to_string() const
{
   return name;
}

void symtab::print_symbol_table() const
{
  for (auto const& x : table)
  {
    std::cout << x.first << x.second << std::endl;
  }
}

void symtab::check_cyclic_classes() const
{
  for (auto const& x : table)
    {
      if (dynamic_cast<s_class*>(x.second))
      {
        s_class *c = dynamic_cast<s_class*>(x.second);
        std::vector<s_class *> classes_vect;
        semantic_assert(cyclic_classes_helper(c, classes_vect),
                        "class \"%s\" contains a cyclic class hierarchy",
                        c->name.c_str());
      }
    }
}

bool symtab::cyclic_classes_helper(s_class *c, std::vector<s_class *> seen_classes) const
{
  s_class *parent = c->superclass;
  if (!parent)
      return true;
  for (size_t i = 0; i < seen_classes.size(); i++)
  {
    if (c->name == seen_classes[i]->name)
       return false;
  }
  seen_classes.push_back(c);
  return cyclic_classes_helper(parent, seen_classes);
}

void symtab::check_interface_implement() const
{
   for (auto const& x: table){
      if (dynamic_cast<s_class *> (x.second))
      {
         s_class * current_class = dynamic_cast<s_class *> (x.second);
         for (size_t i = 0; i < current_class->interfaces.size(); i++){
            s_interface * current_interface = dynamic_cast<s_interface *>(current_class->interfaces[i]);
            std::map<std::string, s_prototype*> proto_map = current_interface->prototype_map;
            std::map<std::string, s_prototype*>::iterator it;
            std::map<std::string, s_function*> func_map = current_class->function_map;
            std::map<std::string, s_function*>::iterator iter;
            for (it = std::begin(proto_map); it != std::end(proto_map); it++){
               size_t count = 0;
                if (proto_map.size() > func_map.size() && proto_map.size() == 1)
                  semantic_assert(false,
                                 "prototype \"%s\" in interface \"%s\" not implemented in class \"%s\"",
                                 (it->first).c_str(), (current_interface->name).c_str(), (current_class->name).c_str());
               for (iter = std::begin(func_map); iter != std::end(func_map); iter++){
                  if (it->first != iter->first)
                     count++;
                  if (count == func_map.size())
                     semantic_assert(false,
                                    "prototype \"%s\" in interface \"%s\" not implemented in class \"%s\"",
                                    (it->first).c_str(), (current_interface->name).c_str(), (current_class->name).c_str());
               }
            }
         }
      }
   }
}

void symtab::check_method_override() const
{
   for (auto const& x : table){
      if (dynamic_cast<s_class*> (x.second)){
         s_class * current_class = dynamic_cast<s_class *> (x.second);
         if (current_class->superclass->defined)
            semantic_assert(check_method_helper(current_class, current_class->superclass),
                            "cannot override method in class \"%s\"",
                            current_class->name.c_str());
      }
   }
}

bool symtab::check_method_helper(s_class* current_class, s_class * superclass) const
{
   if (!superclass->defined)
      return true;
   std::map<std::string, s_function*> cur_func_map = current_class->function_map;
   std::map<std::string, s_function*> sup_func_map = superclass->function_map;
   std::map<std::string, s_function*>::iterator it;
   std::map<std::string, s_function*>::iterator iter;
   for (it = std::begin(cur_func_map); it != std::end(cur_func_map); it++){
      for (iter = std::begin(sup_func_map); iter != std::end(sup_func_map); iter++){
         if (it->first == iter->first)
            std::vector<s_var *> parameters = it->second->params;
      }
   }
   return true;
}

void symtab::check_undefined_usertypes() const
{
  for (auto const& x : table)
  {
    if (dynamic_cast<s_usertype*>(x.second))
    {
      if(dynamic_cast<s_class*>(x.second) && dynamic_cast<s_class*>(x.second)->interfaces.size() != 0)
      {
        std::vector<s_interface*> interfaces =  dynamic_cast<s_class*>(x.second)->interfaces;
        for(size_t i = 0; i < interfaces.size(); i++)
          if(interfaces[i]->defined == false)
            for (auto const& y: table)
              if(dynamic_cast<s_interface*>(y.second) &&
                 dynamic_cast<s_interface*>(y.second)->defined &&
                 y.first == interfaces[i]->name)
                interfaces[i] = dynamic_cast<s_interface*>(y.second);
        dynamic_cast<s_class*>(x.second)->interfaces = interfaces;

      }
      else
      {
      s_usertype *p = dynamic_cast<s_usertype*>(x.second);
      semantic_assert(p->defined,
                      "\"%s\" is undefined",
                      p->to_string().c_str());
      }
    }
  }
}

void symtab::print_classes() const
{
  for (auto const& x : table)
  {
    if (dynamic_cast<s_class*>(x.second))
    {
      s_class *c = dynamic_cast<s_class*>(x.second);
      std::cout << "class " << c->name;
      if (c->superclass)
        std::cout << " has parent "<< c->superclass->name << ".";
      else
        std::cout << " has no parent.";
      std::cout <<  std::endl;
    }
  }
}

semantics *symtab::lookup_local(std::string key) const
{
   // p has type iterator to map of string and semantics*.
   // auto is much easier here. Thank you C++11.
   auto p = table.find(key);
   return p == table.end() ? nullptr : p->second;
}

semantics *symtab::lookup(std::string key) const
{
   semantics *p = lookup_local(key);
   return     p ? p :
          outer ? outer->lookup(key) :
                  nullptr;
}

void symtab::add(std::string key, semantics *value)
{
   assert(!lookup_local(key));
   table[key] = value;
}

void symtab::replace(std::string key, semantics *value)
{
   assert(lookup_local(key));
   table[key] = value;
}

/* *** functions *** */

void open_scope()
{
   current_scope = new symtab(current_scope);
}

symtab *close_scope()
{
   symtab *old = current_scope;
   current_scope = current_scope->outer;
   return old;
}
