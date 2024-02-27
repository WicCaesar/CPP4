/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:43:51 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/27 02:00:35 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {
};

Ice::Ice(const Ice &copy) : AMateria(copy) {
};

Ice &Ice::operator=(const Ice &rhs) {
	this->AMateria::operator=(rhs); //! DESCREVER O QUE ESTÁ ACONTECENDO AQUI
	return (*this);
};

Ice::~Ice(void) {
};

AMateria *Ice::clone(void) const {
	AMateria *clone = new Ice();
	return (clone);
}

void	Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			  << std::endl;
}
