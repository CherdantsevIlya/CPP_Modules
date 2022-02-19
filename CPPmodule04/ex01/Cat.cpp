#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat constructor " << this << " called" << std::endl;
	this->brain = new Brain();
}

Cat::Cat(const Cat &other)
{
    std::cout << "Cat copy constructor " << this << " called" << std::endl;
    this->type = other.type;
	this->brain = new Brain(*other.brain);
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat destructor " << this << " called" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    std::cout << "Cat assignment operator called" << std::endl;
    this->type = other.type;
	this->brain = new Brain(*other.brain);
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "Meow" << std::endl;
}

void Cat::makeIdea() const
{
    std::cout << "Cat thought: \"" << brain->getIdea(42) << "\"" << std::endl;
}


