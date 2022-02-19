#ifndef DESKTOP_FRAGTRAP_H
#define DESKTOP_FRAGTRAP_H

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {

protected:
	unsigned int fragTrapHitPoints;
	unsigned int fragTrapAttackDamage;

public:
    FragTrap();
    FragTrap(std::string fragTrapName);
    FragTrap(const FragTrap& other);
    ~FragTrap();
    FragTrap& operator= (const FragTrap& other);
    void highFivesGuys();
	unsigned int getFragTrapHitPoints() const;
	unsigned int getFragTrapAttackDamage() const;
	void setFragTrapHitPoints(unsigned int amount);
	void setFragTrapAttackDamage(unsigned int amount);

};

#endif
