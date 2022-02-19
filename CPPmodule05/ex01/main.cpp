#include "Bureaucrat.hpp"

int main()
{
    Form a1("A012", 100, 50);
    Form a2("A013", 115, 45);
    Bureaucrat bob("Bob", 90);
    Bureaucrat pop("Pop", 21);
    std::cout << a1 << std::endl;
    std::cout << a2 << std::endl;
    std::cout << bob << std::endl;
    std::cout << pop << std::endl;
    std::string tmp = "B590";
    std::string tmp1 = "J218";
    std::string tmp2 = "C804";

    std::cout << std::endl;
    try // 00
    {
        Form b(tmp, 150, 300);
        std::cout << b << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Form exception: " << tmp << " has " << exception.what() << std::endl;
    }

    try // 01
    {
        Form b(tmp1, 0, 1);
        std::cout << b << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Form exception: " << tmp1 << " has " << exception.what() << std::endl;
    }

    try // 02
    {
        Form b(tmp2, 42, 42);
        std::cout << b << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Form exception: " << tmp2 << " has " << exception.what() << std::endl;
    }

    std::cout << std::endl;
    try // 03
    {
        pop.signForm(a1);
    }
    catch (std::exception &exception)
    {
        std::cerr << "IT WILL NEVER PRINT" << std::endl;
    }

    try // 04
    {
        bob.signForm(a2);
    }
    catch (std::exception &exception)
    {
        std::cerr << "IT WILL NEVER PRINT" << std::endl;
    }
}
