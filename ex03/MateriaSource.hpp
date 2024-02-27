/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 03:39:46 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/27 02:43:48 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# pragma once

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource {
	private:
		AMateria	*materias_[4];
		// int		count_;

	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource &rhs);
		~MateriaSource(void);

		void		learnMateria(AMateria *m);
		AMateria	*createMateria(std::string const &type);
};

#endif
