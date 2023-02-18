/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 20:22:00 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/18 11:19:05 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Constructor
ClapTrap::ClapTrap(void)
{
	std::cout << "[ClapTrap] Creating unnamed ClapTrap via default constructor" << std::endl;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "[ClapTrap] ClapTrap unnamed has " << _hitPoints << " hit points, " << _energyPoints << " energy points, and " << _attackDamage << " attack damage" << std::endl;
	return ;
}

// Overloaded constructor
ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "[ClapTrap] Overloading constructor called for " << Name << std::endl;
	_Name = Name;
	_hitPoints = 10;
	_energyPoints = 10;
	_attackDamage = 0;
	std::cout << "[ClapTrap] ClapTrap " << Name << " has " << _hitPoints << " hit points, " << _energyPoints << " energy points, and " << _attackDamage << " attack damage" << std::endl;
	return ;
}

// Copy constructor
ClapTrap::ClapTrap(const ClapTrap &Source)
{
	if (Source._Name.empty())
		std::cout << "[ClapTrap] Copy constructor called. Copying " << Source._Name << ".." << std::endl;
	else
		std::cout << "[ClapTrap] Copy constructor called. Copying " << Source._Name << " into unnamed ClapTrap.." << std::endl;
	*this = Source;
}

// Operator overloading via 'assignation operator'
// Here we change the meaning (= overloading) of the equals/assignation sign (= operator)

ClapTrap	&ClapTrap::operator=(ClapTrap const &Source)
{
	// std::cout << "Copy assignment operator called" << std::endl;
	this->_Name = Source._Name;
	return (*this);
}

// Destructor
// Automatically called when the object's life comes to an end (e.g. end of program)
ClapTrap::~ClapTrap(void)
{
	std::cout << "[ClapTrap] Destructor called" << std::endl;
	return ;
}

// Member functions
void	ClapTrap::attack(const std::string &target)
{
	std::cout << "[ClapTrap] ClapTrap " << _Name << " wants to attack " << target << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "[ClapTrap] ClapTrap " << _Name << " can't do anything since it does not have enough hit points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "[ClapTrap] ClapTrap " << _Name << " can't do anything since it does not have enough energy points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints > 0)
	{
		std::cout << "[ClapTrap] ClapTrap " << _Name << " has " << _energyPoints << " energy point(s)" << std::endl;
		std::cout << "[ClapTrap] ClapTrap " << _Name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
		this->_energyPoints--;
		std::cout << "[ClapTrap] ClapTrap " << _Name << " now has " << _energyPoints << " energy points left" << std::endl;
		return ;
	}
	return ;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "[ClapTrap] ClapTrap " << _Name << " was hurt by " << amount << " points of damage!" << std::endl;
	std::cout << "[ClapTrap] ClapTrap " << _Name << " now has " << _hitPoints << " hit points left" << std::endl;
	return ;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "[ClapTrap] ClapTrap " << _Name << " wants to repair itself by " << amount << " hit points" << std::endl;
	if (_hitPoints <= 0)
	{
		std::cout << "[ClapTrap] ClapTrap " << _Name << " can't do anything since it does not have enough hit points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints <= 0)
	{
		std::cout << "[ClapTrap] ClapTrap " << _Name << " can't do anything since it does not have enough energy points (i.e. 0 energy points)" << std::endl;
		return ;
	}
	else if (_energyPoints > 0)
	{
		std::cout << "[ClapTrap] ClapTrap " << _Name << " has " << _hitPoints << " and " << _energyPoints << " energy point(s)" << std::endl;
		std::cout << "[ClapTrap] ClapTrap " << _Name << " restores " << amount << " hit points " << std::endl;
		this->_energyPoints--;
		this->_hitPoints = this->_hitPoints + amount;
		std::cout << "[ClapTrap] ClapTrap " << _Name << " has " << _hitPoints << " and " << _energyPoints << " energy point(s)" << std::endl;
		return ;
	}
	return ;
}
