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

	/*
	// Provided by subject
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; i->makeSound(); //will output the cat sound! j->makeSound();
	meta->makeSound();
	*/

	return 0;
}

// If you replace the Animal and the Cat by the wrong ones in the code above, the WrongCat should output the WrongAnimal sound.