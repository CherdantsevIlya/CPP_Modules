#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 5, 25), target("default") {
//    std::cout << "PresidentialPardonForm default constructor " << this << " called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target + "_form", 5, 25), target(target) {
//    std::cout << "PresidentialPardonForm constructor " << this << " called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form(other), target(other.target) {
//    std::cout << "PresidentialPardonForm copy constructor " << this << " called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
//    std::cout << "PresidentialPardonForm destructor " << this << " called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other) {
//    std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
    Form::operator=(other);
    this->target = other.target;
    return *this;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    if (this->getGradeSign() < executor.getGrade())
        throw GradeTooLowException();
    if (this->getSign() == 0)
        throw FormNotSignedException();
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox. " << std::endl;
}