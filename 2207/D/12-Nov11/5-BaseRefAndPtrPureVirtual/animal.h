#ifndef SDDS_ANIMAL_H__
#define SDDS_ANIMAL_H__
namespace sdds{
  class Animal{
    char m_name[41];
  public:
    Animal(const char* name = "Nameless");
    const char* name()const; 
    void name(const char* value); 
    void operator=(Animal&) = delete;  // forbids implemetation
    virtual void act() = 0; // pure virtual enforces implemetation
    void move();
    virtual void sound();
    virtual ~Animal();
  };





}
#endif