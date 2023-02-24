/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 14:08:05 by rbrune        #+#    #+#                 */
/*   Updated: 2023/02/24 16:12:29 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "./../includes/Dog.hpp"

Dog::Dog()
{
	std::cout << "(Dog) Default constructor no arguments" << std::endl;
	this->type = "Dog";
}

Dog::Dog( const Dog & src )
{
	*this = src;
	return ;
}

Dog	&Dog::operator=(Dog const &Source)
{
	std::cout << "Dog has been copied 🐶 [Copy assignment operator]" << std::endl;
	this.type = Source.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "I am a dead dog 💀 [Destructor]" << std::endl;
}

void	Dog::makeSound ( void )
{
	std::cout << "I am a dog 🐶" << std::endl;
}