#ifndef DESKTOP_ANIMAL_H
#define DESKTOP_ANIMAL_H

#include <iostream>
#include <string>

class Animal {

protected:
    std::string type;

public:
    Animal();
    Animal(std::string name);
    Animal(const Animal& other);
    virtual ~Animal();
    Animal& operator= (const Animal& other);
    std::string getType() const;
    virtual void makeSound() const = 0;

};

#endif
