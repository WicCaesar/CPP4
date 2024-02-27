/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.class.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:43:57 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/22 23:44:26 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_CLASS_HPP
# define CAT_CLASS_HPP
# pragma once

# include "Animal.class.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const std::string type);
		Cat(const Cat &other);
		Cat &operator=(const Cat &rhs);
		virtual	~Cat(void);

		void	makeSound(void) const;
};

#endif
