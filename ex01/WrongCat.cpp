/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:50:31 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 03:37:31 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.class.hpp"

WrongCat::WrongCat(void) {
	this->type = "xaninha";
	std::cout << "Gato errado padronizado\t Lá em casa tem um gatuno." << std::endl;
};

WrongCat::WrongCat(const std::string type) : WrongAnimal(type) {
	std::cout << "Gato errado parametrizado\t Lá em casa tinha um gatuno." << std::endl;
};

WrongCat::WrongCat(const WrongCat &other) : WrongAnimal(other){
	*this = other;
	std::cout << "Gato errado clonado\t Lá em casa clonaram um gatuno." << std::endl;
};

WrongCat &WrongCat::operator=(const WrongCat &rhs) {
	this->type = rhs.type;
	std::cout << "Gato errado atribuído\t Lá em casa clonamos um gatuno." << std::endl;
	return *this;
};

WrongCat::~WrongCat(void) {
	std::cout << "Gato errado destruído\t E o gatuno: ";
	makeSound();
};

void WrongCat::makeSound(void) const {
	std::cout << "¿mau-mau? // isso não deve aparecer" << std::endl;
};
