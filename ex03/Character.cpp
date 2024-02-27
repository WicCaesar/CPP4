/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:36:08 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/27 02:51:09 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(void) {
	this->name_ = "Willump";
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = NULL;
}

//Character::Character(const std::string &name)
Character::Character(const std::string &name) {
	this->name_ = name;
	for (int i = 0; i < 4; i++)
		this->inventory_[i] = NULL;
};

Character::Character(const Character &copy) {
	this->name_ = copy.getName();
	for (int i = 0; i < 4; i++) {
		delete this->inventory_[i];
		this->inventory_[i] = copy.inventory_[i];
	}
}

Character	&Character::operator=(const Character &rhs) {
	if (this != &rhs) {
		this->name_ = rhs.getName();
		for (int i = 0; i < 4; i++)
			if (rhs.inventory_[i])
				this->inventory_[i] = rhs.inventory_[i]->clone();
			else
				this->inventory_[i] = NULL;
	}
	return (*this);
}

Character::~Character(void) {
	for (int i = 0; i < 4; i++)
		delete this->inventory_[i];
};

const std::string	&Character::getName(void) const {
	return (this->name_);
};

void	Character::equip(AMateria *m) {
	if (!m)
		return ;
	for (int i = 0; i < 4; i++) {
		if (this->inventory_[i] == NULL) {
			this->inventory_[i] = m;
			return ;
		}
	}
};

void	Character::unequip(int idx) {
	if (idx < 0 || idx >= 4)
		return ;
	this->inventory_[idx] = NULL;
};

void	Character::use(int idx, ICharacter &target) {
	if (idx < 0 || idx >= 4 || this->inventory_[idx] == NULL)
		return ;
	this->inventory_[idx]->use(target);
};
