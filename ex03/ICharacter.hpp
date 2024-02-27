/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:15:14 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/27 02:40:57 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP
# pragma once

# include <iostream>

class	AMateria;
// This forward declaration is necessary because the ICharacter class has a 
// method that receives an AMateria object as a parameter. If the AMateria class
// is not forward declared, the compiler won't know what an AMateria object is.
// It is not enough to include AMateria.hpp because it includes ICharacter.hpp,
// and this would create a circular dependency.

class	ICharacter {
	public:
		virtual ~ICharacter() {}
		virtual std::string	const	&getName() const = 0;
		virtual void				equip(AMateria *m) = 0;
		virtual void				unequip(int idx) = 0;
		virtual void				use(int idx, ICharacter &target) = 0;
};

#endif
