#ifndef DESKTOP_ROBOTOMYREQUESTFORM_H
#define DESKTOP_ROBOTOMYREQUESTFORM_H

#include "Form.hpp"

class RobotomyRequestForm : public Form {

private:
    std::string target;

public:
    RobotomyRequestForm();
    RobotomyRequestForm(std::string target);
    RobotomyRequestForm(const RobotomyRequestForm& other);
    ~RobotomyRequestForm();
    RobotomyRequestForm& operator=(const RobotomyRequestForm& other);
    void execute(Bureaucrat const &executor) const;

};


#endif
