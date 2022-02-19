#ifndef DESKTOP_WRONGCAT_H
#define DESKTOP_WRONGCAT_H

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {

public:
    WrongCat();
    WrongCat(const WrongCat& other);
    virtual ~WrongCat();
    WrongCat& operator= (const WrongCat& other);
    void makeSound() const;

};

#endif
