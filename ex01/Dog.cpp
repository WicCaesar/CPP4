/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:02:53 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 15:34:38 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.class.hpp"

Dog::Dog(void) : Animal("cachorro") {
	this->brain_ = new Brain();
	std::cout << "Cachorro padronizado\t Lá em casa tem um cachorro." << std::endl;
};

Dog::Dog(const std::string type) : Animal(type) {
	this->brain_ = new Brain();
	std::cout << "Cachorro parametrizado\t Lá em casa tinha um cachorro." << std::endl;
};

// Shallow copy: copies the pointer, not the object itself.
/*Dog::Dog(const Dog &other) : Animal(other){
	*this = other;
	std::cout << "Cachorro clonado\t Lá em casa clonaram um cachorro." << std::endl;
};*/

// Deep copy: copies the object itself.
Dog::Dog(const Dog &other) : Animal(other) {
	this->type = other.type;
	this->brain_ = new Brain(*other.brain_);
	std::cout << "Cachorro clonado\t Lá em casa clonamos um cachorro." << std::endl;
};

Dog &Dog::operator=(const Dog &rhs) {
	this->type = rhs.type;
	std::cout << "Cachorro atribuído\t Lá em casa pegamos um cachorro." << std::endl;
	return (*this);
};

Dog::~Dog(void) {
	std::cout << "Cachorro destruído\t E o cachorro: ";
	makeSound();
	delete brain_;
};

Brain	*Dog::get_brain(void) const {
	return (this->brain_);
}

void Dog::makeSound(void) const {
	std::cout << "au-au!" << std::endl;
};
