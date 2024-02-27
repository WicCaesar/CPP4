/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:50:04 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 03:30:44 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.class.hpp"

WrongAnimal::WrongAnimal(void) : type("animal errado") {
	std::cout << "Errado padronizado\t Lá no meu apê tem um " << get_type() << "." << std::endl;
};

WrongAnimal::WrongAnimal(const std::string type) : type(type) {
	std::cout << "Errado parametrizado\t Lá no meu apê tinha um " << get_type() << "." << std::endl;
};

WrongAnimal::WrongAnimal(const WrongAnimal &other) {
	*this = other;
	std::cout << "Errado clonado\t Lá no meu apê clonaram um " << get_type() << "." << std::endl;
};

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	this->type = rhs.type;
	std::cout << "Errado atribuído\t Lá no meu apê clonamos um " << get_type() << "." << std::endl;
	return *this;
};

WrongAnimal::~WrongAnimal(void) {
	std::cout << "Errado destruído\t E o " << get_type() << ": ";
	makeSound();
};

std::string	WrongAnimal::get_type(void) const {
	return this->type;
};

void WrongAnimal::makeSound(void) const {
	std::cout << "blergh!" << std::endl;
};
