#include "./../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "[Dog][Constr.]\t\tCreating Dog via default constructor 🐶" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog & src)
{
	std::cout << "[Dog][Copy]\t\tCopy constructor called 🐶" << std::endl;
	*this = src;
	return ;
}

Dog	&Dog::operator=(Dog const &Source)
{
	std::cout << "[Dog][Assign.]\t\tCopy assignment operator called 🐶" << std::endl;
	this->type = Source.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog][Destr.]\t\tI am a dead dog 💀🐶" << std::endl;
}

void	Dog::makeSound (void) const
{
	std::cout << "[Dog][Sound]\t\tWoof woof! I am a silly drooling dog 🐶" << std::endl;
}
