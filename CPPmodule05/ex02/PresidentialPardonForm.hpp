#ifndef DESKTOP_PRESIDENTIALPARDONFORM_H
#define DESKTOP_PRESIDENTIALPARDONFORM_H

#include "Form.hpp"

class PresidentialPardonForm : public Form {

private:
    std::string target;

public:
    PresidentialPardonForm();
    PresidentialPardonForm(std::string target);
    PresidentialPardonForm(const PresidentialPardonForm& other);
    ~PresidentialPardonForm();
    PresidentialPardonForm& operator=(const PresidentialPardonForm& other);
    void execute(Bureaucrat const &executor) const;

};


#endif
