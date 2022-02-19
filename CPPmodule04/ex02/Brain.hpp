#ifndef DESKTOP_BRAIN_H
#define DESKTOP_BRAIN_H

#include <iostream>
#include <string>

class Brain {

private:
    std::string ideas[100];

public:
    Brain();
    Brain(const Brain& other);
    ~Brain();
    Brain& operator= (const Brain& other);
	std::string getIdea(int i) const;

};

#endif
