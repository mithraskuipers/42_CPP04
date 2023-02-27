#include "Animal.hpp"

// Constructor
Animal::Animal(void)
{
	std::cout << "[Animal]\tCreating Animal via default constructor" << std::endl;
	return ;
}

// Overloaded constructor
Animal::Animal(std::string Name)
{
	std::cout << "[Animal]\tCreating Animal via overloaded constructor" << std::endl;
	this->type = Name;
	return ;
}

// Copy constructor
Animal::Animal(const Animal &Source)
{
	std::cout << "[Animal]\tCopy constructor called" << std::endl;
	*this = Source;
	return ;
}

Animal	&Animal::operator=(Animal const &Source)
{
	std::cout << "[Animal]\tCopy assignment operator called" << std::endl;
	type = Source.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "[Animal]\tDestructor called" << std::endl;
	return ;
}


std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound (void) const
{
	std::cout << "[Animal]\tI am an animal" << std::endl;
}
