#include "ClapTrap.hpp"

int main()
{
	ClapTrap eren("Eren");
	ClapTrap rainer("Rainer");

	eren.setAttackDamage(5);
	rainer.setAttackDamage(5);
	rainer.attack(eren.getName());
	eren.takeDamage(rainer.getAttackDamage());
	eren.beRepaired(10);
	eren.attack(rainer.getName());
	rainer.takeDamage(eren.getAttackDamage());
	eren.attack(rainer.getName());
	rainer.takeDamage(eren.getAttackDamage());
}