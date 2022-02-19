#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    FragTrap sean("Sean");
	ScavTrap john("John");
    ClapTrap mike("Mike");

    mike.setAttackDamage(80);
    john.attack(sean.getName());
    sean.takeDamage(john.getAttackDamage());
    mike.attack(john.getName());
    john.takeDamage(mike.getAttackDamage());
    john.beRepaired(30);
    mike.attack(john.getName());
    john.takeDamage(mike.getAttackDamage());
    sean.highFivesGuys();
}