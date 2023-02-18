/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mikuiper <mikuiper@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/02/17 20:21:49 by mikuiper      #+#    #+#                 */
/*   Updated: 2023/02/17 20:21:53 by mikuiper      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class	ClapTrap
{
	public:
		ClapTrap(void);										// Default constructor
		ClapTrap(std::string Name);							// Overloading constructor
		ClapTrap(ClapTrap const &Source);					// Copy constructor
		ClapTrap	&operator=(ClapTrap const &Source); 	// = operator overloading for ClapTrap class
		~ClapTrap(void);									// Destructor
		void	attack(const std::string &target);			// Member function
		void	takeDamage(unsigned int amount);			// Member function
		void	beRepaired(unsigned int amount);			// Member function
	private:
		std::string	_Name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};

#endif
