/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/19 16:02:54 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/19 16:04:03 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class	Animal
{
	protected:
		std::string	type;
};

#endif

/*
	public:
		Animal(void);										// Default constructor
		Animal(std::string Name);							// Overloading constructor
		Animal(Animal const &Source);					// Copy constructor
		Animal	&operator=(Animal const &Source); 	// = operator overloading for Animal class
		~Animal(void);									// Destructor
		void	attack(const std::string &target);			// Member function
		void	takeDamage(unsigned int amount);			// Member function
		void	beRepaired(unsigned int amount);			// Member function
	private:
		std::string	_Name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
*/
