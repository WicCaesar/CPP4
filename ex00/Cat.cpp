/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:45:01 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 04:01:36 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void) : Animal("bichano") {
	std::cout << "Gato padronizado\t Lá em casa tem um gato." << std::endl;
};

Cat::Cat(const std::string type) : Animal(type) {
	std::cout << "Gato parametrizado\t Lá em casa tinha um gato." << std::endl;
};

Cat::Cat(const Cat &other) : Animal(other){
	*this = other;
	std::cout << "Gato clonado\t Lá em casa clonaram um gato." << std::endl;
};

Cat &Cat::operator=(const Cat &rhs) {
	this->type = rhs.type;
	std::cout << "Gato atribuído\t Lá em casa clonamos um gato." << std::endl;
	return *this;
};

Cat::~Cat(void) {
	std::cout << "Gato destruído\t\t E o gato: ";
	makeSound();
};

void Cat::makeSound(void) const {
	std::cout << "miau?" << std::endl;
};
