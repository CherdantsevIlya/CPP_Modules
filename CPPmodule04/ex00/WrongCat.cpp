#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor " << this << " called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    std::cout << "WrongCat copy constructor " << this << " called" << std::endl;
    this->type = other.type;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor " << this << " called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

void WrongCat::makeSound() const
{
    std::cout << "WrongMeow" << std::endl;
}