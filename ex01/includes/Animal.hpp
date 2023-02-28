#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	public:
		Animal(void);								// Default constructor
		Animal(std::string Name);					// Overloading constructor
		Animal(Animal const &Source);				// Copy constructor
		Animal	&operator=(const Animal &Source);	// = operator overloading for Animal class
		virtual ~Animal(void);								// Destructor	
		virtual void makeSound() const;
		std::string getType(void) const;
	protected:
		std::string	type;
};

#endif
