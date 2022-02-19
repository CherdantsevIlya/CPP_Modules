#ifndef DESKTOP_FORM_H
#define DESKTOP_FORM_H

#include <iostream>
#include <string>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {

private:
    const std::string name;
    bool sign;
    const int gradeExecute;
    const int gradeSign;

public:
    Form();
    Form(std::string name, const int gradeExecute, const int gradeSign);
    Form(const Form& other);
    ~Form();
    Form& operator=(const Form& other);
    class GradeTooHighException : public std::exception {
    public:
        virtual const char *what() const throw();
    };
    class GradeTooLowException : public std::exception {
    public:
        virtual const char* what() const throw();
    };
    std::string getName() const;
    int getGradeExecute() const;
    int getGradeSign() const;
    bool getSign() const;
    void beSigned(Bureaucrat &bureaucrat);
};

std::ostream& operator<< (std::ostream &out, const Form &form);

#endif
