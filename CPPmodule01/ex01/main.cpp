#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name);

int main()
{
    int n;

    std::cout << "Number of zombies: ";
    std::cin >> n;

    Zombie* army = zombieHorde(n,"Zombie");
    for (int i = 0; i < n; i++)
        army[i].announce();
    delete [] army;
}
