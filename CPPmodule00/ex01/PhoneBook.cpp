#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index = 0;
	return ;
};

PhoneBook::~PhoneBook() {}

int is_num(std::string str)
{
    if (str.length() != 1)
        return (1);
    if (!(std::isdigit(str[0])))
        return (1);
    return (0);
}

void PhoneBook::go()
{
	std::string cmd;
    std::string contactIndex;
    int num;

    std::cout << std::endl;
	std::cout << "\x1b[1m\x1b[32m           Welcome to the phone book!\x1b[0m" << std::endl;
    std::cout << std::endl;
	while (1)
	{
		std::cout << "Enter the command name [ ADD | SEARCH | EXIT ]: ";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
		{
			contact[index].addContact();
			if (this->index == 7)
				this->index = 0;
			else
				this->index++;
		}
		else if (cmd == "SEARCH")
		{
            std::cout << std::endl;
			std::cout << " __________ __________ __________ __________ " << std::endl;
            std::cout << "|     index|first name| last name|  nickname|" << std::endl;
            std::cout << "|__________|__________|__________|__________|" << std::endl;
            for (int i = 0; i < 8; i++)
            {
                std::cout << "|         " << i + 1 << "|";
                contact[i].displayContacts();
                std::cout << "|__________|__________|__________|__________|" << std::endl;
            }
            std::cout << std::endl;
            std::cout << "\x1b[36mEnter the desired contact index: \x1b[0m";
            std::getline(std::cin, contactIndex);
            if (!(is_num(contactIndex)))
            {
                num = std::stoi(contactIndex);
                contact[num - 1].displayContact();
            }
            else
                std::cout << "\x1b[1m\x1b[31mError: wrong index\x1b[0m" << std::endl;
            std::cout << std::endl;
		}
		else if (cmd == "EXIT")
		{
            std::cout << std::endl;
			std::cout << "\x1b[1m\x1b[32m                     Bye!\x1b[0m" << std::endl;
            std::cout << std::endl;
			return ;
		}
		else
			std::cout << "\x1b[1m\x1b[31mError: wrong command name, try again\x1b[0m" << std::endl;
	}
	return ;
}
