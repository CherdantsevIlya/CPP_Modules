#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat alex("Alex", 5);
    Bureaucrat dima("Dima", 147);
    std::string name1 = "Sasha";
    std::string name2 = "Dasha";
    std::string name3 = "Masha";

    try // test 00
    {
        Bureaucrat bob(name1, 100);
        std::cout << bob << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Constructor exception: " << name1 << " has " << exception.what() << std::endl;
    }
    std::cout << std::endl;


    try // test 01
    {
        Bureaucrat bob(name2, 200);
        std::cout << bob << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Constructor exception: " << name2 << " has " << exception.what() << std::endl;
    }
    std::cout << std::endl;

    try // test 02
    {
        Bureaucrat bob(name3, 0);
        std::cout << bob << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Constructor exception: " << name3 << " has " << exception.what() << std::endl;
    }
    std::cout << std::endl;

    try // test 02
    {
        alex.increment();
        std::cout << alex << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Constructor exception: " << alex.getName() << " has " << exception.what() << std::endl;
    }
    alex.increment();
    std::cout << alex << std::endl;
    alex.increment();
    std::cout << alex << std::endl;
    try
    {
        alex.increment();
        std::cout << alex << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Increment exception: " << alex.getName() << " has " << exception.what() << std::endl;
    }
    std::cout << std::endl;

    try // test 03
    {
        dima.decrement();
        std::cout << dima << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Constructor exception: " << dima.getName() << " has " << exception.what() << std::endl;
    }
    dima.decrement();
    std::cout << dima << std::endl;
    dima.decrement();
    std::cout << dima << std::endl;
    try
    {
        dima.decrement();
        std::cout << dima << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << "Decrement exception: " << dima.getName() << " has " << exception.what() << std::endl;
    }
    std::cout << std::endl;
}
