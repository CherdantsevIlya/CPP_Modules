#ifndef DESKTOP_DIAMONDTRAP_H
#define DESKTOP_DIAMONDTRAP_H

#include <iostream>
#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:
    std::string name;

public:
    DiamondTrap();
    DiamondTrap(std::string diamondTrapName);
    DiamondTrap(const DiamondTrap& other);
    ~DiamondTrap();
    DiamondTrap& operator= (const DiamondTrap& other);
    void whoAmI();

};

#endif
