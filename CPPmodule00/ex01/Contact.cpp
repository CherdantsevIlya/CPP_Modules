#include "Contact.hpp"

Contact::Contact()
{
    return ;
}

Contact::~Contact()
{
	return ;
}

void lengthCorrection(std::string str)
{
    int j;

    j = 0;
    for (int i = 0; i < 10; i++)
    {
        if ((str.length() >= 10 && i == 9))
            std::cout << ".";
        else if ((str.length() + i) < 10)
            std::cout << " ";
        else
            std::cout << str[j++];
    }
    std::cout << "|";
}

void Contact::displayContacts()
{
    lengthCorrection(this->firstName);
    lengthCorrection(this->lastName);
    lengthCorrection(this->nickname);
    std::cout << std::endl;
}

void Contact::displayContact()
{
    std::cout << "first name:       " << this->firstName << std::endl;
    std::cout << "last name:        " << this->lastName << std::endl;
    std::cout << "nickname:         " << this->nickname << std::endl;
    std::cout << "phone number:     " << this->phoneNumber << std::endl;
    std::cout << "darkest secret:   " << this->darkestSecret << std::endl;
}

void Contact::addContact()
{
    std::cout << std::endl;
	std::cout << "\x1b[32mEnter the information\x1b[0m" << std::endl;
	std::cout << "first name:       ";
	std::getline(std::cin, this->firstName);
	std::cout << "last name:        ";
	std::getline(std::cin, this->lastName);
	std::cout << "nickname:         ";
	std::getline(std::cin, this->nickname);
	std::cout << "phone number:     ";
	std::getline(std::cin, this->phoneNumber);
	std::cout << "darkest secret:   ";
	std::getline(std::cin, this->darkestSecret);
//	std::cout << "\x1b[32mContact successfully added\x1b[0m" << std::endl;
    std::cout << std::endl;
}
