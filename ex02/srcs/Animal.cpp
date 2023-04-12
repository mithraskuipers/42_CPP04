#include "Animal.hpp"
#include "Brain.hpp"

// Constructor
Animal::Animal(void)
{
	std::cout << "[Animal][Constr.]\tCreating Animal via default constructor" << std::endl;
	return ;
}

// Overloaded constructor
Animal::Animal(std::string Name)
{
	std::cout << "[Animal][Constr.]\tCreating Animal via overloaded constructor" << std::endl;
	this->type = Name;
	return ;
}

// Copy constructor
Animal::Animal(const Animal &Source)
{
	std::cout << "[Animal][Copy]\tCopy constructor called" << std::endl;
	*this = Source;
	return ;
}

// = operator overloading for Animal class
Animal	&Animal::operator=(const Animal &Source)
{
	std::cout << "[Animal][Assign.]\tCopy assignment operator called" << std::endl;
	type = Source.type;
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "[Animal][Destr.]\tI am a dead animal" << std::endl;
	return ;
}

std::string Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound (void) const
{
	std::cout << "[Animal][Sound]\tI am an animal" << std::endl;
}
