#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <iomanip>
#include "Contact.hpp"
#include <string>

class PhoneBook
{
private:
	Contact contact[8];
	int index;

public:
	PhoneBook();
	~PhoneBook();
	void go();

};

#endif
