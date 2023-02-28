//	Orthodox Canonical Form is also known as Orthodox Canonical Class Form.
//	It means you classes need to have a default constructor, copy constructor
//	destructor, and copy assignment operator.
//	- default constructor: used internally to initialize objects and data members
//	when no other value is available.
//	- copy constructor: a copy constructor is a member function that initializes
//	an object using another object of the same class
//	- assignment operator: used to assign one value to another.
//	- destructor: invoked when an object is deleted.

#include "./../includes/Animal.hpp"
#include "./../includes/Dog.hpp"
#include "./../includes/Cat.hpp"
#include "./../includes/WrongAnimal.hpp"
#include "./../includes/WrongCat.hpp"
#include "./../includes/Brain.hpp"

int main(void)
{
	Animal *animalobject = new Animal();
	animalobject->makeSound();

	Animal *dogobject = new Dog();
	dogobject->makeSound();

	Animal *catobject = new Cat();
	catobject->makeSound();

	WrongAnimal *wronganimalobject = new WrongAnimal();
	wronganimalobject->makeSound();

	WrongCat *wrongcatobject = new WrongCat();
	wrongcatobject->makeSound();

	Brain	*brainobject = new Brain();
	// std::cout << brainobject->ideas << std::endl; // Print ideas memory address
	brainobject->printIdeas(); // Print all ideas

	// main() section as instructed in the subject
	// The subject instructs to create n animals, with 50/50 dog/cat split. To prevent issues with
	// uneven dog/cat splits, specify the amount of animals that will be created for both dogs/cats.
	unsigned int	n_animals_per_type;
	n_animals_per_type = 10;
	Animal *animalobjects[n_animals_per_type * 2];
	for (unsigned int i = 0; i < n_animals_per_type * 2; i++)
	{
		// First half dogs
		if (i < n_animals_per_type)
		{
			animalobjects[i] = new Dog();
		}
		// Second half cats
		else
		{
			animalobjects[i] = new Cat();
		}
	}

	// Subject also instructs to delete the created animalobjects[]
	for (unsigned int i = 0; i < sizeof(animalobjects) / sizeof(animalobjects)[0]; i++)
	{
		delete animalobjects[i];
	}
	return 0;
}
