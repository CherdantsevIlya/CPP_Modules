#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
//    std::cout << "Cure default constructor " << this << " called" << std::endl;
}

Cure::Cure(const Cure &other)
{
//    std::cout << "Cure constructor " << this << " called" << std::endl;
    this->type = other.type;
}

Cure::~Cure()
{
//    std::cout << "Cure destructor " << this << " called" << std::endl;
}

Cure &Cure::operator=(const Cure &other)
{
//    std::cout << "Cure assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

AMateria *Cure::clone() const
{
    return new Cure();
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
