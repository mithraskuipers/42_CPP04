#include "./../includes/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "[Cat][Constr.]\tCreating Cat via default constructor" << std::endl;
	this->type = "Cat";
}

Cat::Cat(const Cat & src)
{
	std::cout << "[Cat][Copy]\tCopy constructor called" << std::endl;
	*this = src;
	return ;
}

Cat	&Cat::operator=(Cat const &Source)
{
	std::cout << "[Cat][Assign.]\tCopy assignment operator called" << std::endl;
	this->type = Source.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "[Cat][Destr.]\tI am a dead Cat 💀" << std::endl;
}

void	Cat::makeSound (void) const
{
	std::cout << "[Cat][Sound]\tMeooow! I am a lazy Cat 🐱" << std::endl;
}
