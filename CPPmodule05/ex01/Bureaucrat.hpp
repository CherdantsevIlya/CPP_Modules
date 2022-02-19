#ifndef DESKTOP_BUREAUCRAT_H
#define DESKTOP_BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {

private:
	const std::string name;
	int grade;

public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat& other);
	~Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat& other);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    void increment();
    void decrement();
    std::string getName() const;
	int getGrade() const;
    void signForm(Form &form);

};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
