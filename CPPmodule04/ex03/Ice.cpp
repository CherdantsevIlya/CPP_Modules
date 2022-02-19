#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
//    std::cout << "Ice default constructor " << this << " called" << std::endl;
}

Ice::Ice(const Ice &other)
{
//    std::cout << "Ice constructor " << this << " called" << std::endl;
    this->type = other.type;
}

Ice::~Ice()
{
//    std::cout << "Ice destructor " << this << " called" << std::endl;
}

Ice &Ice::operator=(const Ice &other)
{
//    std::cout << "Ice assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

AMateria *Ice::clone() const
{
    return new Ice();
}

void Ice::use(ICharacter &target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

