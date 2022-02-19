#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 137, 145), target("default") {
//    std::cout << "ShrubberyCreationForm default constructor " << this << " called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target + "_form", 137, 145), target(target) {
//    std::cout << "ShrubberyCreationForm constructor " << this << " called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : Form(other), target(other.target) {
//    std::cout << "ShrubberyCreationForm copy constructor " << this << " called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
//    std::cout << "ShrubberyCreationForm destructor " << this << " called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
//    std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
    Form::operator=(other);
    this->target = other.target;
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    std::ofstream out;

    if (this->getGradeSign() < executor.getGrade())
        throw GradeTooLowException();
    if (this->getSign() == 0)
        throw FormNotSignedException();
    out.open(this->target + "_shrubbery");
    if (!out.is_open()) {
        std::cerr << "File open error!" << std::endl;
        return ;
    }
    else
    {
        out << "          &&& &&  & &&\n";
        out << "      && &\\/&\\|& ()|/ @, &&\n";
        out << "      &\\/(/&/&||/& /_/)_&/_&\n";
        out << "   &() &\\/&|()|/&\\/ '%\" & ()\n";
        out << "  &_\\_&&_\\ |& |&&/&__%_/_& &&\n";
        out << "&&   && & &| &| /& & % ()& /&&\n";
        out << " ()&_---()&\\&\\|&&-&&--%---()~\n";
        out << "     &&     \\|||\n";
        out << "             |||\n";
        out << "             |||\n";
        out << "             |||\n";
        out << "       , -=-~  .-^- _\n";
        out << "ejm97    ";
    }
    out.close();
}
