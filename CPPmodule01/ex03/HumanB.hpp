#ifndef DESKTOP_HUMANB_H
#define DESKTOP_HUMANB_H

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanB {

private:
    std::string _name;
    Weapon* _weapon;

public:
    HumanB(std::string name);
    void attack();
    void setWeapon(Weapon& weapon);

};

#endif
