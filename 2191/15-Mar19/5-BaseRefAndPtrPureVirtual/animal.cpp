#include <iostream>
#include <cstring>
using namespace std;
#include "animal.h"

namespace sict{



  Animal::Animal(const char* name){
    this->name(name);
    cout << "Creating " << _name << " the Animal" << endl;
  }
  const char* Animal::name()const{
    return _name;
  }
  void Animal::name(const char* value){
    strncpy(_name, value, 40);
    _name[40] = char(0);
  }
 
  void Animal::move(){
    cout << "Move like animal" << endl;
  }
  void Animal::sound(){
    cout << "Sound like animal" << endl;
  }
  Animal::~Animal(){
     cout << "Remove " << _name << " the animal" << endl;
  }
}