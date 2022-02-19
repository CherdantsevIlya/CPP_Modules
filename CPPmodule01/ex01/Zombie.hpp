#ifndef DESKTOP_ZOMBIE_H
#define DESKTOP_ZOMBIE_H

#include <iostream>
#include <string>

class Zombie {

private:
    std::string _name;

public:
    Zombie();
    ~Zombie();
    void announce(void);
    void setName(std::string name);
};

#endif
