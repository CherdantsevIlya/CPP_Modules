#ifndef DESKTOP_ICE_H
#define DESKTOP_ICE_H

#include "AMateria.hpp"

class Ice : public AMateria {

public:
	Ice();
	Ice(const Ice& other);
	~Ice();
	Ice& operator=(const Ice& other);
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif
