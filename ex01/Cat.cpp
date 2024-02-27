/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 23:45:01 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 17:18:19 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.class.hpp"

Cat::Cat(void) : Animal("gato") {
	this->brain_ = new Brain();
	std::cout << "Gato padronizado\t Lá em casa tem um gato." << std::endl;
};

Cat::Cat(const std::string type) : Animal(type) {
	this->type = type;
	this->brain_ = new Brain();
	std::cout << "Gato parametrizado\t Lá em casa tinha um gato." << std::endl;
};

// Shallow copy: copies the pointer, not the object itself.
/*Cat::Cat(const Cat &other) : Animal(other){
	*this = other;
	std::cout << "Gato clonado\t Lá em casa clonaram um gato." << std::endl;
};*/

// Deep copy: copies the object itself.
Cat::Cat(const Cat &other) : Animal(other) {
	this->type = other.type;
	this->brain_ = new Brain(*other.brain_);
	std::cout << "Gato clonado\t\t Lá em casa clonamos um gato." << std::endl;
};

// Shallow copy: copies the pointer, not the object itself.
Cat &Cat::operator=(const Cat &rhs) {
	delete brain_; // Supresses memory leak.
	this->type = rhs.type;
	this->brain_ = new Brain(*rhs.brain_);
	std::cout << "Gato atribuído\t\t Lá em casa pegamos um gato." << std::endl;
	return (*this);
};

Cat::~Cat(void) {
	std::cout << "Gato destruído\t\t E o gato: ";
	makeSound();
	delete brain_;
};

Brain	*Cat::get_brain(void) const {
	return (this->brain_);
};

void Cat::makeSound(void) const {
	std::cout << "miau?" << std::endl;
};
