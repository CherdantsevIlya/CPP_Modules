#include "Intern.hpp"

Intern::Intern() {
//    std::cout << "Intern default constructor " << this << " called" << std::endl;
}

Intern::Intern(const Intern &other) {
//    std::cout << "Intern copy constructor " << this << " called" << std::endl;
    (void)other;
}

Intern::~Intern() {
//    std::cout << "Intern destructor " << this << " called" << std::endl;
}

Intern &Intern::operator=(const Intern &other) {
//    std::cout << "Intern assignment operator called" << std::endl;
    (void)other;
    return *this;
}

Form *Intern::makeForm(std::string nameForm, std::string targetForm) {
    std::string forms[3] = { "shrubbery creation", "robotomy request", "presidential pardon"};
    Form *a;
    int i = 0;

    while (i < 3 && forms[i] != nameForm)
        i++;
    switch (i)
    {
        case 0:
            a = new ShrubberyCreationForm(targetForm);
            break;
        case 1:
            a = new RobotomyRequestForm(targetForm);
            break;
        case 2:
            a = new PresidentialPardonForm(targetForm);
            break;
        default:
            throw "Intern couldn't create form";
    }
    std::cout << "Intern creates " << *a << std::endl;
    return a;
}
