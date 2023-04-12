#include "./../includes/WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "[WrongCat][Constr.]\tCreating WrongCat via default constructor" << std::endl;
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat & src)
{
	std::cout << "[WrongCat][Copy]\tCopy constructor called" << std::endl;
	*this = src;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &Source)
{
	std::cout << "[WrongCat][Assign.]\tCopy assignment operator called" << std::endl;
	this->type = Source.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "[WrongCat][Destr.]\tI am a dead WrongCat 💀" << std::endl;
}

void	WrongCat::makeSound (void) const
{
	std::cout << "[WrongCat][Sound]\tMeooow! I am a lazy WrongCat  🐱" << std::endl;
}
