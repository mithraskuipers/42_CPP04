#include "./../includes/Cat.hpp"

Cat::Cat(void)
{
	std::cout << "[Cat][Constr.]\t\tCreating Cat via default constructor 🐱" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
	return ;
}

Cat::Cat(const Cat & src)
{
    std::cout << "[Cat][Copy]\t\tCopy constructor called 🐶" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain); // perform a deep copy of the Brain object
	return ;
}

Cat &Cat::operator=(const Cat & rhs)
{
    std::cout << "[Cat][Assign.]\t\tCopy assignment operator called 🐶" << std::endl;
    if (this != &rhs)
    {
        this->type = rhs.type;
        delete this->brain; // delete the old Brain object
        this->brain = new Brain(*rhs.brain); // perform a deep copy of the Brain object
    }
    return *this;
}

Cat::~Cat()
{
	std::cout << "[Cat][Destr.]\t\tI am a dead Cat 💀🐱" << std::endl;
	delete this->brain;
}

void	Cat::makeSound (void) const
{
	std::cout << "[Cat][Sound]\t\tMeooow! I am a lazy Cat 🐱" << std::endl;
	return ;
}

void	Cat::catIdeas(void) const
{
	this->brain->printIdeas();
	return ;
}