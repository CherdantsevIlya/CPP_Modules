#include "Form.hpp"

Form::Form() : name("XXX"), sign(false), gradeExecute(150), gradeSign(150)
{
//    std::cout << "Form default constructor " << this << " called" << std::endl;
}

Form::Form(std::string name, const int gradeExecute, const int gradeSign) : name(name), sign(false), gradeExecute(gradeExecute), gradeSign(gradeSign)
{
//    std::cout << "Form constructor " << this << " called" << std::endl;
    if (gradeExecute < 1 || gradeSign < 1)
        throw GradeTooHighException();
    else if (gradeExecute > 150 || gradeSign > 150)
        throw GradeTooLowException();
}

Form::Form(const Form &other) : name(other.name), sign(other.sign), gradeExecute(other.gradeExecute), gradeSign(other.gradeSign)
{
//    std::cout << "Form copy constructor " << this << " called" << std::endl;
}

Form::~Form()
{
//    std::cout << "Form destructor " << this << " called" << std::endl;
}

Form &Form::operator=(const Form &other)
{
//    std::cout << "Form assignment operator called" << std::endl;
    this->sign = other.sign;
    return *this;
}

std::string Form::getName() const
{
    return this->name;
}

bool Form::getSign() const
{
    return this->sign;
}

int Form::getGradeExecute() const
{
    return this->gradeExecute;
}

int Form::getGradeSign() const
{
    return this->gradeSign;
}

const char *Form::GradeTooLowException::what() const throw()
{
    return "Too low grade!";
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "Too high grade!";
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() > this->gradeSign)
        throw GradeTooLowException();
    else
        this->sign = true;
}

std::ostream& operator<< (std::ostream &out, const Form &form)
{
    out << form.getName() << "(gradeExecute: " << form.getGradeExecute() << ", gradeSign: " << form.getGradeSign() << ", status: " << form.getSign() << ")";
    return (out);
}