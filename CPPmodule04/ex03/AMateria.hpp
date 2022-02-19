#ifndef DESKTOP_AMATERIA_H
#define DESKTOP_AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class ICharacter;

class AMateria {

protected:
	std::string type;

public:
    AMateria(std::string const& type);
    AMateria();
    AMateria(const AMateria& other);
    virtual ~AMateria();
    AMateria& operator=(const AMateria& other);
	std::string const& getType() const; // Returns the materia type
	virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);

};

#endif
