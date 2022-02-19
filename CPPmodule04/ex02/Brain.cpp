#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain constructor " << this << " called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = "I want to play!";
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constructor " << this << " called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain::~Brain()
{
    std::cout << "Brain destructor " << this << " called" << std::endl;
}

Brain &Brain::operator=(const Brain &other)
{
    std::cout << "Brain assignment operator called " << this << " called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return *this;
}

std::string Brain::getIdea(int i) const
{
	if (i >= 0 && i <= 99)
		return (this->ideas[i]);
	return ("I dont have that many ideas");
}
