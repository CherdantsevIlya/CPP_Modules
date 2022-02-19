#include "AMateria.hpp"

AMateria::AMateria()
{
//	std::cout << "AMateria default constructor " << this << " called" << std::endl;
	this->type = "";
}

AMateria::AMateria(const std::string &type)
{
//	std::cout << "AMateria constructor " << this << " called" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &other)
{
//    std::cout << "AMateria copy constructor " << this << " called" << std::endl;
    this->type = other.type;
}

AMateria::~AMateria()
{
//    std::cout << "AMateria destructor " << this << " called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &other)
{
//    std::cout << "AMateria assignment operator called" << std::endl;
    this->type = other.type;
    return *this;
}

const std::string &AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter &target)
{
    std::cout << target.getName() << " use materia" << std::endl;
}