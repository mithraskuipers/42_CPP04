#include "./../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "[Dog][Constr.]\tCreating Dog via default constructor" << std::endl;
	this->type = "Dog";
}

Dog::Dog(const Dog & src)
{
	std::cout << "[Dog][Copy]\tCopy constructor called" << std::endl;
	*this = src;
	return ;
}

Dog	&Dog::operator=(Dog const &Source)
{
	std::cout << "[Dog][Assign.]\tCopy assignment operator called" << std::endl;
	this->type = Source.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "[Dog][Destr.]\tI am a dead dog 💀" << std::endl;
}

void	Dog::makeSound (void) const
{
	std::cout << "[Dog][Sound]\tWoof woof! I am a drooling dog 🐶" << std::endl;
}
