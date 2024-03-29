#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

/*
If the destructors in Animal and its derived classes are not declared as virtual,
then when a derived class object is deleted through a pointer to the base class,
only the destructor of the base class will be called. It can lead to memory leaks.
*/

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
