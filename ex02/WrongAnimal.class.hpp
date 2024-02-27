/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.class.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:49:55 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 03:47:39 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_CLASS_HPP
# define WRONGANIMAL_CLASS_HPP
# pragma once

# include <iostream>

class WrongAnimal {
	protected:
		std::string	type;
	
	public:
		WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal &other);
		WrongAnimal &operator=(const WrongAnimal &rhs);
		virtual ~WrongAnimal(void);

		std::string	get_type(void) const;
		
		void makeSound(void) const; // Without the virtual keyword, 
		// this function won't be replaced in derived classes.
		// It's just a function that can be called from the derived classes.
};

#endif
