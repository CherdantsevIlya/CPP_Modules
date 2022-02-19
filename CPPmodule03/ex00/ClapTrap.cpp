#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Constructor " << this << " called" << std::endl;
	this->name = "Noname";
	this->hitPoints = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
	std::cout << "Constructor " << this << " called" << std::endl;
	this->name = name;
	this->hitPoints = 10;
	this->energyPoint = 10;
	this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
	std::cout << "Copy constructor " << this << " called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor " << this << " called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoint = other.energyPoint;
	this->attackDamage = other.attackDamage;
	return *this;
}

std::string ClapTrap::getName() const
{
	return this->name;
}

unsigned int ClapTrap::getAttackDamage() const
{
	return this->attackDamage;
}

void ClapTrap::setAttackDamage(unsigned int amount)
{
	this->attackDamage = amount;
}

void ClapTrap::attack(const std::string &target)
{
    if (this->hitPoints && this->energyPoint)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target;
        std::cout << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		this->energyPoint--;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints <= amount)
    {
        std::cout << "ClapTrap " << this->name << " takes " << amount;
        std::cout << " damage points and dies!" << std::endl;
        this->hitPoints = 0;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " takes " << amount;
        std::cout << " damage points!" << std::endl;
        this->hitPoints -= amount;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints && this->energyPoint)
    {
        std::cout << "ClapTrap " << this->name << " recovers " << amount;
        std::cout << " health points" << std::endl;
        this->hitPoints += amount;
        this->energyPoint--;
    }
}

