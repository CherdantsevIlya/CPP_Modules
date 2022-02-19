#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor " << this << " called" << std::endl;
    this->type = "";
}

Animal::Animal(std::string name)
{
    std::cout << "Animal constructor " << this << " called" << std::endl;
    this->type = name;
}

Animal::Animal(const Animal &other)
{
    std::cout << "Animal copy constructor " << this << " called" << std::endl;
    this->type = other.type;
}

Animal::~Animal()
{
    std::cout << "Animal destructor " << this << " called" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    std::cout << "Animal assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

std::string Animal::getType() const
{
    return this->type;
}

void Animal::makeSound() const
{
    std::cout << "I'm Animal" << std::endl;
}
