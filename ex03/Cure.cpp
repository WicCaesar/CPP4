/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 21:41:18 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/27 02:00:41 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {
};

Cure::Cure(const Cure &copy) : AMateria(copy) {
};

Cure &Cure::operator=(const Cure &rhs) {
	this->AMateria::operator=(rhs);
	return (*this);
};

Cure::~Cure(void) {
};

AMateria *Cure::clone(void) const {
	AMateria *clone = new Cure();
	return (clone);
};

void	Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
};
