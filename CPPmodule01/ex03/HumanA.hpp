#ifndef DESKTOP_HUMANA_H
#define DESKTOP_HUMANA_H

#include "Weapon.hpp"
#include <iostream>
#include <string>

class HumanA {

private:
    std::string _name;
    Weapon& _weapon;

public:
    HumanA(std::string name, Weapon& weapon);
    void attack();
};

#endif
