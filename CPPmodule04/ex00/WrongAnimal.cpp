#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor " << this << " called" << std::endl;
    this->type = "";
}

WrongAnimal::WrongAnimal(std::string name)
{
    std::cout << "WrongAnimal constructor " << this << " called" << std::endl;
    this->type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    std::cout << "WrongAnimal copy constructor " << this << " called" << std::endl;
    this->type = other.type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor " << this << " called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

std::string WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::makeSound() const
{
    std::cout << "I'm WrongAnimal" << std::endl;
}