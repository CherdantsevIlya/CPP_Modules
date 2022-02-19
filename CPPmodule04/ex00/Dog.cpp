#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor " << this << " called" << std::endl;
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor " << this << " called" << std::endl;
    this->type = other.type;
}

Dog::~Dog()
{
    std::cout << "Dog destructor " << this << " called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}