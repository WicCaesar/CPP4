/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:50:20 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 03:42:11 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_CLASS_HPP
# define WRONGCAT_CLASS_HPP
# pragma once

# include "WrongAnimal.class.hpp"
# include <iostream>

class WrongCat : public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(std::string type);
		WrongCat(const WrongCat &other);
		WrongCat &operator=(const WrongCat &rhs);
		~WrongCat(void);
		
		void makeSound(void) const;
};

#endif
