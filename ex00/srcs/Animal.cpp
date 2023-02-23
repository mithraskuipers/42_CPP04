/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/19 16:02:59 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/19 16:03:01 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

// Constructor
Animal::Animal(void)
{
	std::cout << "[Animal] Creating unnamed Animal via default constructor" << std::endl;
	return ;
}

// Overloaded constructor
// Animal::Animal(std::string Name)
// {
// 	return ;
// }

// Copy constructor
Animal::Animal(const Animal &Source)
{
	*this = Source;
	return ;
}

// Operator overloading via 'assignation operator'
// Here we change the meaning (= overloading) of the equals/assignation sign (= operator)

Animal	&Animal::operator=(Animal const &Source)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	type = Source.type;
	return (*this);
}

// Destructor
// Automatically called when the object's life comes to an end (e.g. end of program)
Animal::~Animal(void)
{
	std::cout << "[Animal] Destructor called" << std::endl;
	return ;
}

// Member functions

