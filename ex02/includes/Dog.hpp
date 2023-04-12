#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public:
		Dog();	
		Dog(Dog const & src);
		~Dog();
		Dog &operator=(const Dog& ref);
		void	makeSound(void) const;
		void	dogIdeas(void) const;
	private:
		Brain*	brain;
};

#endif
