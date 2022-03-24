#include "DiamondTrap.hpp"

int main()
{
    DiamondTrap diamond("Brilliant");
    ScavTrap stone("Stone");

    std::cout << std::endl;
    std::cout << "DiamondTrap hitPoints: " << diamond.getHitPoints() << std::endl;
    std::cout << "DiamondTrap energyPoint: " << diamond.getEnergyPoint() << std::endl;
    std::cout << "DiamondTrap attackDamage: " << diamond.getAttackDamage() << std::endl;
    diamond.attack(stone.getName());
    stone.takeDamage(diamond.getAttackDamage());
    std::cout << "ScavTrap hitPoints: " << stone.getHitPoints() << std::endl;
    std::cout << "ScavTrap energyPoint: " << stone.getEnergyPoint() << std::endl;
    std::cout << "ScavTrap attackDamage: " << stone.getAttackDamage() << std::endl;
	diamond.whoAmI();
    diamond.highFivesGuys();
    std::cout << std::endl;
}