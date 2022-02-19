#ifndef DESKTOP_WEAPON_H
#define DESKTOP_WEAPON_H

#include <iostream>
#include <string>

class Weapon {

private:
    std::string _type;

public:
    Weapon(std::string name);
    void setType(std::string newType);
    const std::string& GetType() const;
};

#endif
