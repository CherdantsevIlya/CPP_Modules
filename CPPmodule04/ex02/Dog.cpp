#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog constructor " << this << " called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &other)
{
    std::cout << "Dog copy constructor " << this << " called" << std::endl;
    this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor " << this << " called" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    std::cout << "Dog assignment operator called" << std::endl;
    this->type = other.type;
	this->brain = new Brain(*other.brain);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

void Dog::makeIdea() const
{
	std::cout << "Dog thought: \"" << brain->getIdea(std::rand() % 100) << "\"" << std::endl;
}