/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 01:11:11 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/27 02:15:14 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) {
	// this->count_ = 0;
	for (int i = 0; i < 4; i++) {
		materias_[i] = NULL;
	};
};

MateriaSource::MateriaSource(const MateriaSource &copy) {
	for (int i = 0; i < 4; i++) {
		if (copy.materias_[i]) {
			this->materias_[i] = copy.materias_[i]->clone();
			// this->count_ = i + 1;
		}
		else
			this->materias_[i] = NULL;
	}
};

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	if (this != &rhs) {
		this->~MateriaSource();
		for (int i = 0; i < 4; i++) {
			if (rhs.materias_[i]) {
				this->materias_[i] = rhs.materias_[i]->clone();
				// this->count_ = i + 1;
			} else
				this->materias_[i] = NULL;
		}
	}
	return (*this);
};

MateriaSource::~MateriaSource(void) {
	for (int i = 0; i < 4; i++)
		delete materias_[i];
	// this->count_ = 0;
};

void	MateriaSource::learnMateria(AMateria *m) {
	if (m) {
		for (int i = 0; i < 4; i++) {
			if (!this->materias_[i]) {
				this->materias_[i] = m;
				// this->count_ = i + 1;
				break;
			}
		}
	}
};

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++) {
		// Checks if the materia exists and if the type matches.
		if (this->materias_[i] && this->materias_[i]->getType() == type) {
			// this->count_ = i + 1;
			return (this->materias_[i]->clone());
		}
	}
	return (NULL);
};
