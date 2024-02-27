/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:07:19 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 03:31:27 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"

Animal::Animal(void) : type("animal") {
	std::cout << "Animal padronizado\t Lá em casa tem um " << get_type() << "." << std::endl;
};

Animal::Animal(const std::string type) : type(type) {
	std::cout << "Animal parametrizado\t Lá em casa tinha um " << get_type() << "." << std::endl;
};

Animal::Animal(const Animal &other) {
	*this = other;
	std::cout << "Animal clonado\t Lá em casa clonaram um " << get_type() << "." << std::endl;
};

Animal &Animal::operator=(const Animal &rhs) {
	this->type = rhs.type;
	std::cout << "Animal atribuído\t Lá em casa clonamos um " << get_type() << "." << std::endl;
	return *this;
};

Animal::~Animal(void) {
	std::cout << "Animal destruído\t E o " << get_type() << ": ";
	makeSound();
};

std::string	Animal::get_type(void) const {
	return this->type;
};

void Animal::makeSound(void) const {
	std::cout << "grrr…" << std::endl;
};
