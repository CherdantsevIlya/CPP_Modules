#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 45, 72), target("default") {
//    std::cout << "RobotomyRequestForm default constructor " << this << " called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target + "_form", 45, 72), target(target) {
//    std::cout << "RobotomyRequestForm constructor " << this << " called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form(other), target(other.target) {
//    std::cout << "RobotomyRequestForm copy constructor " << this << " called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
//    std::cout << "RobotomyRequestForm destructor " << this << " called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other) {
//    std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
    Form::operator=(other);
    this->target = other.target;
    return *this;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    if (this->getGradeSign() < executor.getGrade())
        throw GradeTooLowException();
    if (this->getSign() == 0)
        throw FormNotSignedException();
    std::cout << "Vvvzzzzzzzhzhzh" << std::endl;
    std::cout << "VvVVvvvzzzzzZZzhzhzhhzhzh" << std::endl;
    std::cout << "VVVVZZZZZHZHZHZHZHZHZH" << std::endl;
    std::cout << this->target + "_form" << " has been robotomized successfully 50% of the time. " << std::endl;
}