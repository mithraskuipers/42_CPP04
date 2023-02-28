#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <sstream>

class	Brain
{
	public:
		Brain(void);								// Default constructor
		Brain(Brain const &Source);					// Copy constructor
		Brain	&operator=(const Brain &Source);	// = operator overloading for Brain class
		~Brain(void);								// Destructor	
		std::string	ideas[100];
		std::string	createIdeas(unsigned int ideaLen);
		void		printIdeas(void);
};

#endif
