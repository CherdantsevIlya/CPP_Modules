#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Bureaucrat bob("Bob", 1);
    std::cout << bob << std::endl;
    std::cout << std::endl;

    try // 00
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("robotomy request", "Bender");
        bob.signForm(*rrf);
        rrf->execute(bob);
    }
    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << std::endl;
    }
    std::cout << std::endl;

    try // 01
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("shrubbery creation", "tree");
        bob.signForm(*rrf);
        rrf->execute(bob);
    }
    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << std::endl;
    }
    std::cout << std::endl;

    try // 02
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("presidential pardon", "president");
        bob.signForm(*rrf);
        rrf->execute(bob);
    }
    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << std::endl;
    }
    std::cout << std::endl;

    try // 03
    {
        Intern someRandomIntern;
        Form* rrf;
        rrf = someRandomIntern.makeForm("xxx format", "Bender");
        bob.signForm(*rrf);
        rrf->execute(bob);
    }
    catch (const char* exception)
    {
        std::cerr << "Error: " << exception << std::endl;
    }
}
