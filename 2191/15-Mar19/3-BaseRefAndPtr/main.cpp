#include <iostream>
#include <cstring>
using namespace std;
#include "cat.h"
using namespace sict;
int main(){
  Cat p("Pepper");
  Cat* c = new Cat("Fluffy");
  Animal* ap = new Cat("Tom");
  Animal& ar = p;
  cout << "------------Using Animal pointer: " << endl;
  c->act();
  c->move();
  c->sound();
  cout << "------------Using Animal reference: " << endl;
  ar.act();
  ar.move();
  ar.sound();
  cout << "------------Using Animal pointer: " << endl;
  ap->act();
  ap->move();
  ap->sound();
  delete c; 
  delete ap; // only the animal is deleted, oops!!!
  cout << "------------End of main" << endl;
  return 0;
}
