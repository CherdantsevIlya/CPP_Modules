#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    ShrubberyCreationForm form1("form1");
    RobotomyRequestForm form2("form2");
    PresidentialPardonForm form3("form3");
    Bureaucrat bob("Bob", 150);
    Bureaucrat lol("Lol", 80);
    Bureaucrat kek("Kek", 50);
    Bureaucrat yap("Yap", 10);
    std::cout << form1 << std::endl;
    std::cout << form2 << std::endl;
    std::cout << form3 << std::endl;
    std::cout << std::endl;
    std::cout << bob << std::endl;
    std::cout << lol << std::endl;
    std::cout << kek << std::endl;
    std::cout << yap << std::endl;
    std::cout << std::endl;

    try // 000 SHRUBBERY CREATION FORM
    {
        form1.execute(bob);
    }
    catch (std::exception &exception)
    {
        std::cerr << "Exception: " << bob.getName() << " has " << exception.what() << std::endl;
    }
    try // 001
    {
        form1.execute(lol);
    }
    catch (std::exception &exception)
    {
        std::cerr << "Exception: " << exception.what() << std::endl;
    }
    try // 002
    {
        lol.signForm(form1);
        form1.execute(lol);
    }
    catch (std::exception &exception)
    {
        std::cerr << "IT WILL NEVER PRINT" << std::endl;
    }
    std::cout << std::endl;



    try // 010 ROBOTOMY REQUEST FORM
    {
        form2.execute(lol);
    }
    catch (std::exception &exception)
    {
        std::cerr << "Exception: " << lol.getName() << " has " << exception.what() << " Robotomy failed." << std::endl;
    }
    try // 011
    {
        form2.execute(kek);
    }
    catch (std::exception &exception)
    {
        std::cerr << "Exception: " << exception.what() << " Robotomy failed." << std::endl;
    }
    try // 012
    {
        kek.signForm(form2);
        form2.execute(kek);
    }
    catch (std::exception &exception)
    {
        std::cerr << "IT WILL NEVER PRINT" << std::endl;
    }
    std::cout << std::endl;



    try // 020 RRESIDENTIAL PARDON FORM
    {
        form3.execute(kek);
    }
    catch (std::exception &exception)
    {
        std::cerr << "Exception: " << kek.getName() << " has " << exception.what() << " Robotomy failed." << std::endl;
    }
    try // 021
    {
        form3.execute(yap);
    }
    catch (std::exception &exception)
    {
        std::cerr << "Exception: " << exception.what() << " Robotomy failed." << std::endl;
    }
    try // 022
    {
        yap.signForm(form3);
        form3.execute(yap);
    }
    catch (std::exception &exception)
    {
        std::cerr << "IT WILL NEVER PRINT" << std::endl;
    }
}
