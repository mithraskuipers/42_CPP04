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
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "[Animal] Animal unnamed has " << _hitPoints << " hit points, " << _energyPoints << " energy points, and " << _attackDamage << " attack damage" << std::endl;
	return ;
}

// Overloaded constructor
Animal::Animal(std::string Name)
{
	std::cout << "[Animal] Overloading constructor called for " << Name << std::endl;
	_Name = Name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "[Animal] Animal " << Name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points, and " << _attackDamage << " attack damage" << std::endl;
	return ;
}

// Copy constructor
Animal::Animal(const Animal &Source)
{
	if (Source._Name.empty())
		std::cout << "[Animal] Copy constructor called. Copying " << Source._Name << ".." << std::endl;
	else
		std::cout << "[Animal] Copy constructor called. Copying " << Source._Name << " into unnamed Animal.." << std::endl;
	*this = Source;
}

// Operator overloading via 'assignation operator'
// Here we change the meaning (= overloading) of the equals/assignation sign (= operator)

Animal	&Animal::operator=(Animal const &Source)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_Name = Source._Name;
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
void	Animal::attack(const std::string &target)
{
	std::cout << "[Animal] Animal " << _Name << " wants to attack " << target << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "[Animal] Animal " << _Name << " can't do anything since it does not have enough hit points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "[Animal] Animal " << _Name << " can't do anything since it does not have enough energy points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints > 0)
	{
		std::cout << "[Animal] Animal " << _Name << " has " << _energyPoints << " energy point(s)" << std::endl;
		std::cout << "[Animal] Animal " << _Name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "[Animal] Animal " << _Name << " now has " << _energyPoints << " energy points left" << std::endl;
		return ;
	}
	return ;
}

void	Animal::takeDamage(unsigned int amount)
{
	std::cout << "[Animal] Animal " << _Name << " was hurt by " << amount << " points of damage!" << std::endl;
	std::cout << "[Animal] Animal " << _Name << " now has " << _hitPoints << " hit points left" << std::endl;
	return ;
}

void	Animal::beRepaired(unsigned int amount)
{
	std::cout << "[Animal] Animal " << _Name << " wants to repair itself by " << amount << " hit points" << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "[Animal] Animal " << _Name << " can't do anything since it does not have enough hit points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "[Animal] Animal " << _Name << " can't do anything since it does not have enough energy points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints > 0)
	{
		std::cout << "[Animal] Animal " << _Name << " has " << _hitPoints << " and " << _energyPoints << " energy point(s)" << std::endl;
		std::cout << "[Animal] Animal " << _Name << " restores " << amount << " hit points " << std::endl;
		this->_energyPoints--;
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << "[Animal] Animal " << _Name << " has " << _hitPoints << " and " << _energyPoints << " energy point(s)" << std::endl;
		return ;
	}
	return ;
}
