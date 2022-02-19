#ifndef DESKTOP_BUREAUCRAT_H
#define DESKTOP_BUREAUCRAT_H

#include <iostream>
#include <string>
#include <exception>

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

};

std::ostream& operator<< (std::ostream &out, const Bureaucrat &bureaucrat);

#endif
