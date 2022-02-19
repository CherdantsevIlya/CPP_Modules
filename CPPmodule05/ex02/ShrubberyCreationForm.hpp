#ifndef DESKTOP_SHRUBBERYCREATIONFORM_H
#define DESKTOP_SHRUBBERYCREATIONFORM_H

#include "Form.hpp"

class ShrubberyCreationForm : public Form {

private:
    std::string target;

public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(std::string target);
    ShrubberyCreationForm(const ShrubberyCreationForm& other);
    ~ShrubberyCreationForm();
    ShrubberyCreationForm& operator=(const ShrubberyCreationForm& other);
    void execute(Bureaucrat const &executor) const;

};


#endif
