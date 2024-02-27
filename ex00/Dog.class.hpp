/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 00:59:05 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/22 23:44:42 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# pragma once

# include "Animal.class.hpp"

class Dog : public Animal {
	public:
		Dog(void);
		Dog(const std::string type);
		Dog(const Dog &other);
		Dog &operator=(const Dog &rhs);
		virtual ~Dog(void);

		void	makeSound(void) const;
};

#endif
