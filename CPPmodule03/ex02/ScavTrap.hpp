#ifndef DESKTOP_SCAVTRAP_H
#define DESKTOP_SCAVTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:
	ScavTrap();
	ScavTrap(std::string scavTrapName);
	ScavTrap(const ScavTrap& other);
	~ScavTrap();
	ScavTrap& operator= (const ScavTrap& other);
	void attack(const std::string& target);
	void guardGate();

};

#endif
