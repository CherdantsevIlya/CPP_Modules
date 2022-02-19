#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor " << this << " called" << std::endl;
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor " << this << " called" << std::endl;
    this->type = other.type;
}

Cat::~Cat()
{
    std::cout << "Cat destructor " << this << " called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}
