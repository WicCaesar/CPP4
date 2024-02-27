/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 20:11:43 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/24 00:00:33 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include "ICharacter.hpp"
# include <iostream>

class AMateria {
	protected:
		std::string	type_;

	public:
		AMateria(const std::string &type);
		AMateria(const AMateria &other);
		AMateria &operator=(const AMateria &rhs);
		virtual ~AMateria(void);

		std::string const	&getType() const;

		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target);
};

#endif
