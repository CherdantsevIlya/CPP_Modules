#ifndef DESKTOP_DOG_H
#define DESKTOP_DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {

private:
	Brain* brain;

public:
    Dog();
    Dog(const Dog& other);
    virtual ~Dog();
    Dog& operator= (const Dog& other);
    virtual void makeSound() const;
	void makeIdea() const;

};

#endif
