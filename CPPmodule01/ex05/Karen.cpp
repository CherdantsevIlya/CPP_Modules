#include "Karen.hpp"

Karen::Karen()
{
    this->f[0] = this->debug();
    this->f[1] = &Karen::info;
    this->f[2] = &Karen::warning;
    this->f[3] = &Karen::error;
    this->f[4] = &Karen::test;
}

void Karen::complain(std::string level)
{
    int i = 0;
    std::string comments[4] = { "DEBUG", "INFO", "WARNING", "ERROR"};

    while ((comments[i] != level) && (i < 4))
        i++;
    (this->*f[i])();
}

void Karen::debug()
{
    std::cout << "[ DEBUG ]     I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Karen::info()
{
    std::cout << "[ INFO ]      I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Karen::warning()
{
    std::cout << "[ WARNING ]   I think I deserve to have some extra bacon for free. ";
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Karen::error()
{
    std::cout << "[ ERROR ]     This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Karen::test()
{
    std::cout << "[ TEST ]      \x1b[31mError: non-existent method\x1b[0m" << std::endl;
}