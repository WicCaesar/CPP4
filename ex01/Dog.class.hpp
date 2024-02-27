/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 00:59:05 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 15:34:26 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_CLASS_HPP
# define DOG_CLASS_HPP
# pragma once

# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Dog : public Animal {
	private:
		Brain	*brain_;

	public:
		Dog(void);
		Dog(const std::string type);
		Dog(const Dog &other);
		Dog &operator=(const Dog &rhs);
		virtual ~Dog(void);

		Brain	*get_brain(void) const;

		void	makeSound(void) const;
};

#endif
