#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public:
		Cat();	
		Cat(Cat const & src);
		~Cat();
		Cat &operator=(const Cat& ref);
		void 	makeSound() const;
		void	catIdeas(void) const;
	private:
		Brain*	brain;
};

#endif
