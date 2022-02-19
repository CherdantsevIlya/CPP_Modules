#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
    std::cout << "DiamondTrap Constructor " << this << " called" << std::endl;
    ClapTrap::name += "_clap_name";
	this->name = "Noname";
	this->hitPoints = getFragTrapHitPoints();
	this->energyPoint = getScavTrapEnergyPoints();
	this->attackDamage = getFragTrapAttackDamage();
}

DiamondTrap::DiamondTrap(std::string diamondTrapName) : ClapTrap(diamondTrapName), ScavTrap(diamondTrapName), FragTrap(diamondTrapName)
{
    std::cout << "DiamondTrap Constructor " << this << " called" << std::endl;
    ClapTrap::name += "_clap_name";
	this->name = diamondTrapName;
	this->hitPoints = getFragTrapHitPoints();
	this->energyPoint = getScavTrapEnergyPoints();
	this->attackDamage = getFragTrapAttackDamage();

}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    std::cout << "DiamondTrap Copy constructor " << this << " called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoint = other.energyPoint;
    this->attackDamage = other.attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "DiamondTrap Copy assignment operator called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoint = other.energyPoint;
    this->attackDamage = other.attackDamage;
    return *this;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap Destructor " << this << " called" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap name is " << this->name << " and ClapTrap name is " << ClapTrap::name << std::endl;
}