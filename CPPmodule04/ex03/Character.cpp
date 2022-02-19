#include "Character.hpp"

Character::Character()
{
//    std::cout << "Character default constructor " << this << " called" << std::endl;
    this->name = "";
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;
}

Character::Character(std::string name)
{
//    std::cout << "Character constructor " << this << " called" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->slot[i] = NULL;
}

Character::Character(const Character &other)
{
//    std::cout << "Character copy constructor " << this << " called" << std::endl;
    this->name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (other.slot[i])
            this->slot[i] = other.slot[i]->clone();
        else
            this->slot[i] = NULL;
    }
}

Character::~Character()
{
//    std::cout << "Character destructor " << this << " called" << std::endl;
    for (int i = 0; i < 4; i++)
        if (this->slot[i])
            delete this->slot[i];
}

Character &Character::operator=(const Character &other)
{
//    std::cout << "Character assignment operator called" << std::endl;
    this->name = other.name;
    for (int i = 0; i < 4; i++)
    {
        if (other.slot[i])
            this->slot[i] = other.slot[i]->clone();
        else
            this->slot[i] = NULL;
    }
    return *this;
}

const std::string &Character::getName() const
{
    return this->name;
}

void Character::equip(AMateria *m)
{
    int i;

    for (i = 0; i < 4 && this->slot[i]; i++)
        ;
    if (i >= 0 && i <= 3)
        this->slot[i] = m;
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx <= 3)
        this->slot[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx >= 0 && idx <= 3 && this->slot[idx])
        this->slot[idx]->use(target);
}
