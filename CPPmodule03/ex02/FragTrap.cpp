#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    std::cout << "FragTrap Constructor " << this << " called" << std::endl;
    this->name = "Noname";
    this->hitPoints = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(std::string fragTrapName) : ClapTrap(fragTrapName)
{
    std::cout << "FragTrap Constructor " << this << " called" << std::endl;
    this->hitPoints = 100;
    this->energyPoint = 100;
    this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
    std::cout << "FragTrap Copy constructor " << this << " called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoint = other.energyPoint;
    this->attackDamage = other.attackDamage;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap Destructor " << this << " called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    std::cout << "FragTrap Copy assignment operator called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoint = other.energyPoint;
    this->attackDamage = other.attackDamage;
    return *this;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " : \"High fives, guys\"" << std::endl;
}

