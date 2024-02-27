/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:43:57 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 15:34:14 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# pragma once

# include "Animal.class.hpp"
# include "Brain.class.hpp"

class Cat : public Animal {
	private:
		Brain	*brain_;

	public:
		Cat(void);
		Cat(const std::string type);
		Cat(const Cat &other);
		Cat &operator=(const Cat &rhs);
		virtual	~Cat(void);

		Brain	*get_brain(void) const;

		void	makeSound(void) const;
};

#endif
