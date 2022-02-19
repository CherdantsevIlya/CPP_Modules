#ifndef DESKTOP_FRAGTRAP_H
#define DESKTOP_FRAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:
    FragTrap();
    FragTrap(std::string fragTrapName);
    FragTrap(const FragTrap& other);
    ~FragTrap();
    FragTrap& operator= (const FragTrap& other);
    void highFivesGuys();

};

#endif
