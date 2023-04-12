#include "./../includes/Dog.hpp"

Dog::Dog(void)
{
	std::cout << "[Dog][Constr.]\t\tCreating Dog via default constructor 🐶" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
	this->brain->printIdeas();
	return ;
}

Dog::Dog(const Dog& src)
{
    std::cout << "[Dog][Copy]\t\tCopy constructor called 🐶" << std::endl;
    this->type = src.type;
    this->brain = new Brain(*src.brain); // Deep copy of Brain object
}

Dog& Dog::operator=(const Dog& src)
{
    std::cout << "[Dog][Assign.]\t\tCopy assignment operator called 🐶" << std::endl;
    if (this != &src)
    {
        this->type = src.type;
        delete this->brain; // Delete old Brain object
        this->brain = new Brain(*src.brain); // Deep copy of Brain object
    }
    return (*this);
}

Dog::~Dog()
{
    std::cout << "[Dog][Destr.]\t\tI am a dead dog 💀🐶" << std::endl;
    delete this->brain;
}

void	Dog::makeSound (void) const
{
	std::cout << "[Dog][Sound]\t\tWoof woof! I am a silly drooling dog 🐶" << std::endl;
	return ;
}

void	Dog::dogIdeas(void) const
{
	this->brain->printIdeas();
	return ;
}