#include "ScavTrap.hpp"

int main()
{
	ScavTrap boba("Boba");
    ClapTrap biba("Biba");

    boba.attack(biba.getName());
    boba.guardGate();
    biba.beRepaired(25);
}