#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("bureaucrat"), grade(150)
{
//    std::cout << "Bureaucrat default constructor " << this << " called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name)
{
//    std::cout << "Bureaucrat constructor " << this << " called" << std::endl;
    if (grade > 150)
        throw GradeTooLowException();
    else if (grade < 1)
        throw GradeTooHighException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other) : name(other.name), grade(other.grade)
{
//    std::cout << "Bureaucrat copy constructor " << this << " called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
//    std::cout << "Bureaucrat destructor " << this << " called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &other)
{
//    std::cout << "Bureaucrat assignment operator called" << std::endl;
    this->grade = other.grade;
    return *this;
}

int Bureaucrat::getGrade() const
{
    return this->grade;
}

std::string Bureaucrat::getName() const
{
    return this->name;
}

void Bureaucrat::increment()
{
    std::cout << this->getName() << " grade +1" << std::endl;
     if (this->grade == 1)
         throw GradeTooHighException();
     else
         this->grade--;
}

void Bureaucrat::decrement()
{
    std::cout << this->getName() << " grade -1" << std::endl;
    if (this->grade == 150)
        throw GradeTooLowException();
    else
        this->grade++;
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Too low grade!";
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Too high grade!";
}

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat)
{
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
    return (out);
}

void Bureaucrat::signForm(Form &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cerr << this->name << " couldn’t sign " << form << " because " << this->name << " has " << exception.what() << std::endl;
    }
}

void Bureaucrat::executeForm(const Form &form)
{
    try
    {
        form.execute(*this);
        std::cout << *this << " executed " << form << std::endl;
    }
    catch (std::exception &exception)
    {
        std::cout << *this << " failed to executed " << form << std::endl;
    }
}