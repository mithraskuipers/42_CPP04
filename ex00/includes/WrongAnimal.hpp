#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class	WrongAnimal
{
	public:
		WrongAnimal(void);								// Default constructor
		WrongAnimal(std::string Name);					// Overloading constructor
		WrongAnimal(WrongAnimal const &Source);				// Copy constructor
		WrongAnimal	&operator=(WrongAnimal const &Source); 	// = operator overloading for WrongAnimal class
		~WrongAnimal(void);								// Destructor	
		virtual void makeSound() const;
		std::string getType(void) const;
	protected:
		std::string	type;
};

#endif
