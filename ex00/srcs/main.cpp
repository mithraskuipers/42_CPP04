/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/19 16:03:04 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/24 15:57:03 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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


int main(void)
{
	Animal diertje("Diertje");
	diertje.makeSound();
	Dog basje("rick");
	basje.makeSound();
	return 0;
}
