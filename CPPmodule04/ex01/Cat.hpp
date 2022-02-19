#ifndef DESKTOP_CAT_H
#define DESKTOP_CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {

private:
    Brain* brain;

public:
    Cat();
    Cat(const Cat& other);
    virtual ~Cat();
    Cat& operator= (const Cat& other);
    virtual void makeSound() const;
    void makeIdea() const;

};

#endif
