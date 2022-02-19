#include "Zombie.hpp"

Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main()
{
    Zombie* Foo = newZombie("Foo");
    Foo->announce();
    Zombie* Bob = newZombie("Bob");
    Bob->announce();
    randomChump("ZombieChump1");
    randomChump("ZombieChump2");
    delete Foo;
    delete Bob;
}

