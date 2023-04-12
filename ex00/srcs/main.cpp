// Exercise 00: Polymorphism

#include "./../includes/Animal.hpp"
#include "./../includes/Dog.hpp"
#include "./../includes/Cat.hpp"
#include "./../includes/WrongAnimal.hpp"
#include "./../includes/WrongCat.hpp"

int main(void)
{
	Animal *animalobject = new Animal();
	animalobject->makeSound();
	delete animalobject;

	Animal *dogobject = new Dog();
	dogobject->makeSound();
	delete dogobject;

	Animal *catobject = new Cat();
	catobject->makeSound();
	delete catobject;

	WrongAnimal *wronganimalobject = new WrongAnimal();
	wronganimalobject->makeSound();
	delete wronganimalobject;

	WrongCat *wrongcatobject = new WrongCat();
	wrongcatobject->makeSound();
	delete wrongcatobject;

	/*
	// main() calls as instructed in the subject
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl; std::cout << i->getType() << " " << std::endl; i->makeSound(); //will output the cat sound! j->makeSound();
	meta->makeSound();
	*/

	// system("leaks cpp04_ex00");

	return 0;
}
