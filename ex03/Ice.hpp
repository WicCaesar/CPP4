/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/24 20:37:19 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/27 02:43:18 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP
# pragma once

# include "AMateria.hpp"

class Ice : public AMateria {
	public:
		Ice(void);
		Ice(const Ice &copy);
		Ice	&operator=(const Ice &rhs);
		~Ice(void);

		AMateria	*clone(void) const;
		void		use(ICharacter &target);
};

#endif
