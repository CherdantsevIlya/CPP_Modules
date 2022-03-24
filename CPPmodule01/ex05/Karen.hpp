#ifndef DESKTOP_KAREN_H
#define DESKTOP_KAREN_H

#include <iostream>
#include <string>

class Karen {

private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    void test(void);
    void (*f[5])();

public:
    Karen();
    void complain(std::string level);

};

#endif
