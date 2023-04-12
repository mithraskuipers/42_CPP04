#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

/*
If the destructors in Animal and its derived classes are not declared as virtual,
then when a derived class object is deleted through a pointer to the base class,
only the destructor of the base class will be called. It can lead to memory leaks.
*/

/*
To make the Animal class non-instantiable, you need to make it an abstract class.
To make a class abstract, you need to have at least one pure virtual function.
In your current implementation, the destructor and makeSound() functions are 
already declared as a virtual function, so you can turn them in a pure virtual
function by adding = 0 to their declaration
*/

class	Animal
{
	public:
		Animal(void);								// Default constructor
		Animal(std::string Name);					// Overloading constructor
		Animal(Animal const &Source);				// Copy constructor
		Animal	&operator=(const Animal &Source);	// = operator overloading for Animal class
		virtual ~Animal(void) = 0;					// Destructor	
		virtual void makeSound() const = 0;
		std::string getType(void) const;
	protected:
		std::string	type;
};

#endif
