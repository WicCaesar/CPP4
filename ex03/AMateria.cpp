/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:11:48 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/27 02:49:49 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(const std::string &type) {
	this->type_ = type;
};

AMateria::AMateria(const AMateria &other) {
	*this = other;
};

AMateria &AMateria::operator=(const AMateria &rhs) {
	this->type_ = rhs.getType();
	return (*this);
};

AMateria::~AMateria(void) {
	this->type_.clear();
};

std::string const &AMateria::getType(void) const {
	return (this->type_);
};

void AMateria::use(ICharacter &Target) {
	(void)Target;
};
