/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.class.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:07:06 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/22 23:53:02 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_CLASS_HPP
# define ANIMAL_CLASS_HPP
# pragma once

# include <iostream>

class Animal {
	protected:
		std::string	type;
	
	public:
		Animal(void);
		Animal(std::string type);
		Animal(const Animal &other);
		Animal &operator=(const Animal &rhs);
		virtual ~Animal(void);
		// When you delete a derived class object using a pointer to the base
		// class, and the base class has a non-virtual destructor, the derived
		// class's destructor isn't called, and the full object isn't destroyed.
		// It's dangerous because the full object's destructors won't be called,
		// which can lead to memory leaks and other serious issues.
		// To avoid this, make the base class destructor virtual. This makes
		// all the derived class destructors be called upon deleting a derived
		// class object using a pointer to the base class.

		std::string	get_type(void) const;
		
		virtual void makeSound(void) const;
		// A virtual function is a member function which is declared within a
		// base class and is redefined (overriden) by a derived class.
		// When referring to a derived class object using a pointer or a 
		// reference to the base class, you can call a virtual function for
		// that object and execute the derived class's version of the function.
};

#endif

// A pure virtual function is a virtual function that is set to 0.
// A class containing a pure virtual function is called an abstract class.
// You cannot create an instance of an abstract class. You can only create
// a pointer to an abstract class, but it must point to a derived class
// object. If you create a pointer to an abstract class, you can call the
// pure virtual function, and the derived class's version of the function
// will be executed. For instance: Animal *a = new Dog(); a->makeSound();
// The output will be "au-au".
// If you create a pointer to an abstract class and call a non-pure virtual
// function, the base class's version of the function will be executed.
// For instance: Animal *a = new Dog(); a->get_type();
// The output will be "animal".
// It is used to define an interface for a base class, which will be
// inherited by other classes. The derived classes must implement all
// the pure virtual functions of the abstract class, otherwise they
// will be abstract classes themselves.
// A pure virtual function is a function that must be overridden in a
// derived class. If you do not override the pure virtual
// function in the derived class, the derived class will also be an
// abstract class.
