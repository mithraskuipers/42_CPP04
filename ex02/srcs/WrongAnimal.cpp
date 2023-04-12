#include "WrongAnimal.hpp"

// Constructor
WrongAnimal::WrongAnimal(void)
{
	std::cout << "[WrongAnimal][Constr.]\tCreating WrongAnimal via default constructor" << std::endl;
	return ;
}

// Overloaded constructor
WrongAnimal::WrongAnimal(std::string Name)
{
	std::cout << "[WrongAnimal][Constr.]\tCreating WrongAnimal via overloaded constructor" << std::endl;
	this->type = Name;
	return ;
}

// Copy constructor
WrongAnimal::WrongAnimal(const WrongAnimal &Source)
{
	std::cout << "[WrongAnimal][Copy]\tCopy constructor called" << std::endl;
	*this = Source;
	return ;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &Source)
{
	std::cout << "[WrongAnimal][Assign.]\tCopy assignment operator called" << std::endl;
	type = Source.type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "[WrongAnimal][Destr.]\tI am a dead WrongAnimal 💀" << std::endl;
	return ;
}

void	WrongAnimal::makeSound (void) const
{
	std::cout << "[WrongAnimal][Sound]\tI am a WrongAnimal" << std::endl;
}

std::string WrongAnimal::getType(void) const
{
	return (this->type);
}
