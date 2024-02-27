/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:41:32 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/27 02:07:56 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP
# pragma once

# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria {
	/* This bracket initialisation syntax is only possible on C++11.
	private:
		std::string	type_{"cure"};
	*/

	public:
		Cure(void);
		Cure(const Cure &copy);
		Cure	&operator=(const Cure &rhs);
		~Cure(void);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
