#include "Brain.hpp"

std::string	Brain::createIdeas(unsigned int ideaLen)
{
	const std::string	set = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	std::string			ideaStr;
	char				setChar;

	for (unsigned int i = 0; i < ideaLen; i++)
	{
		setChar = set[std::rand() % set.length()];
		ideaStr = ideaStr + setChar;
	}
	return (ideaStr);
}

void Brain::printIdeas()
{
	std::cout << "[Brain][Print]\tPrinting all ideas" << std::endl;
    for (unsigned int i = 0; i < (sizeof(this->ideas) / sizeof(this->ideas[0])); i++)
    {
        std::stringstream ss;
        ss << "Idea #" << i << ": " << this->ideas[i];
        std::cout << ss.str() << std::endl;
    }
	return ;
}

Brain::Brain(void)
{
	std::cout << "[Brain][Constr.]\tCreating Brain via default constructor" << std::endl;
	for (unsigned int i = 0; i < (sizeof(this->ideas) / sizeof(this->ideas[0])); i++)
	{
		this->ideas[i] = createIdeas(9);
	}
	return ;
}

Brain::Brain(const Brain &Source)
{
	std::cout << "[Brain][Copy]\tCopy constructor called" << std::endl;
	*this = Source;
	for (unsigned int i = 0; i < (sizeof(this->ideas) / sizeof(this->ideas[0])); i++)
	{
		this->ideas[i] = Source.ideas[i];
	}
	return ;
}

Brain   &Brain::operator=(const Brain &Source)
{
	std::cout << "[Brain][Assign.]\tCopy assignment operator called" << std::endl;
	for (unsigned int i = 0; i < (sizeof(this->ideas) / sizeof(this->ideas[0])); i++)
	{
		this->ideas[i] = Source.ideas[i];
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "[Brain][Destr.]\tCreating Brain via default constructor" << std::endl;
	return ;
}