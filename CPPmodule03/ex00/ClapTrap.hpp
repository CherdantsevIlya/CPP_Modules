#ifndef DESKTOP_CLAPTRAP_H
#define DESKTOP_CLAPTRAP_H

#include <iostream>
#include <string>

class ClapTrap {

private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoint;
	unsigned int attackDamage;

public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& other);
	~ClapTrap();
	ClapTrap& operator= (const ClapTrap& other);
    void setAttackDamage(unsigned int amount);
    unsigned int getAttackDamage() const;
    std::string getName() const;
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif