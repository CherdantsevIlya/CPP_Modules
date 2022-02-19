#ifndef DESKTOP_WRONGANIMAL_H
#define DESKTOP_WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {

protected:
    std::string type;

public:
    WrongAnimal();
    WrongAnimal(std::string name);
    WrongAnimal(const WrongAnimal& other);
    virtual ~WrongAnimal();
    WrongAnimal& operator= (const WrongAnimal& other);
    std::string getType() const;
    void makeSound() const;

};

#endif
