// Exercise 01: I don’t want to set the world on fire

#include "./../includes/Animal.hpp"
#include "./../includes/Dog.hpp"
#include "./../includes/Cat.hpp"
#include "./../includes/WrongAnimal.hpp"
#include "./../includes/WrongCat.hpp"
#include "./../includes/Brain.hpp"

void demonstrationDeepCopy()
{
    Dog* dogA = new Dog();
    Dog* dogB = new Dog();
    
    std::cout << "[Dog][Ideas]\t\tDogA ideas 🐶" << std::endl;
    dogA->dogIdeas();
    std::cout << "[Dog][Ideas]\t\tDogB ideas 🐶" << std::endl;
    dogB->dogIdeas();
    
    // Make a deep copy of dogA and assign it to dogB
	/*
	The "dogB = dogA" performans a deep copy.
	This is because the custom assignment operator for the Brain class performs a
	deep copy of the ideas array when the assignment is made, rather than just copying
	the pointer to the ideas array. So when the line "this->brain = Source.brain;"
	is executed, the Brain object in the Dog class will have a separate copy of the
	ideas array from the Brain object in the Source object, rather than pointing to
	the same memory location. In other words, any changes made to this->brain will not
	affect Source.brain, and vice versa.	
	If there would have been no such overloadig, the "dogB = dogA" would fall back on
	the default assignment operator, which would perform a shallow copy.
	*/
    *dogB = *dogA;
    
    std::cout << "[Dog][Ideas]\t\tDogB ideas after copying from DogA 🐶" << std::endl;
    dogB->dogIdeas();
    
    delete dogA;
    delete dogB;
}
	
int main(void)
{
	Animal *animalobject = new Animal();
	animalobject->makeSound();

	Animal *fakedogobject = new Dog();
	fakedogobject->makeSound();

	Animal *fakecatobject = new Cat();
	fakecatobject->makeSound();

	Brain	*brainobject = new Brain();
	// std::cout << brainobject->ideas << std::endl; // Print ideas memory address
	brainobject->printIdeas(); // Print all ideas

	// main() section as instructed in the subject
	// The subject instructs to create n animals, with 50/50 dog/cat split. To prevent issues with
	// uneven dog/cat splits, specify the amount of animals that will be created for both dogs/cats.
	unsigned int	n_animals_per_type;
	n_animals_per_type = 5;
	Animal *animalobjects[n_animals_per_type * 2];
	for (unsigned int i = 0; i < n_animals_per_type * 2; i++)
	{
		// First half of array gets dogs
		if (i < n_animals_per_type)
		{
			animalobjects[i] = new Dog();
		}
		// Second half of array gets cats
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

	demonstrationDeepCopy();

	//system("leaks cpp04_ex01");
	return 0;
}
