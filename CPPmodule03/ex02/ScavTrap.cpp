#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "ScavTrap Constructor " << this << " called" << std::endl;
	this->name = "Noname";
	this->hitPoints = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(std::string scavTrapName) : ClapTrap(scavTrapName)
{
    std::cout << "ScavTrap Constructor " << this << " called" << std::endl;
	this->name = scavTrapName;
	this->hitPoints = 100;
	this->energyPoint = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy constructor " << this << " called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Destructor " << this << " called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& other)
{
	std::cout << "ScavTrap Copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->hitPoints && this->energyPoint)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target;
		std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoint--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->name << " activated guardGate mode" << std::endl;
}