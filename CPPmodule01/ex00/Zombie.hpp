#ifndef DESKTOP_ZOMBIE_H
#define DESKTOP_ZOMBIE_H

#include <iostream>
#include <string>


class Zombie {

private:
    std::string _name;

public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce(void);
};


#endif
