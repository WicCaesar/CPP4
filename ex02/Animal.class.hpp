/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:07:06 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 20:00:37 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# pragma once

# include <iostream>

// An abstract class is designed to be specifically used as template for others.
// This means that it is either incomplete or partially complete, and must be 
// completed by a derived class. Abstract classes contain at least 
// one pure virtual function that must be overridden in a derived class.
// If you do not override the pure virtual function in the derived class,
// it will also be an abstract class.

class Animal {
	protected:
		std::string	type;
	
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &other);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal(void);

		std::string	get_type(void) const;
		
		virtual void makeSound(void) const = 0;
		// To make this a pure virtual function, and make this class abstract,
		// simply add = 0 at the end of the function declaration.
		// This way, derived classes will be forced to override this function.
};

#endif
