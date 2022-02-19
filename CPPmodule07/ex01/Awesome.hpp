#ifndef DESKTOP_AWESOME_H
#define DESKTOP_AWESOME_H

#include <iostream>
#include <string>
#include <fstream>

class Awesome {

private:
    int _n;

public:
    Awesome();
    Awesome(int n);
    Awesome(const Awesome& other);
    ~Awesome();

    Awesome& operator=(const Awesome& other);
    bool operator==(const Awesome& other) const;
    bool operator!=(const Awesome& other) const;
    bool operator>(const Awesome& other) const;
    bool operator<(const Awesome& other) const;
    bool operator>=(const Awesome& other) const;
    bool operator<=(const Awesome& other) const;
    int get_n() const;

};

std::ostream& operator<<(std::ostream& out, const Awesome& awesome);

#endif
