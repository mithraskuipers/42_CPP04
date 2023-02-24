/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: rbrune <rbrune@student.42.fr>                +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/01/31 14:05:44 by rbrune        #+#    #+#                 */
/*   Updated: 2023/02/24 16:10:09 by rbrune        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal
{
    public:
		Dog();	
		Dog( Dog const & src );
		~Dog();
        Dog &operator=(const Dog& ref);
        void makeSound();	
};

//std::ostream &	operator<<( std::ostream & o, Dog const & i );

#endif