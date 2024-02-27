/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.class.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:54:11 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 15:26:18 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_CLASS_HPP
# define BRAIN_CLASS_HPP
# pragma once

# include <iostream>

class Brain {
	private:
		std::string	ideas_[100];

	public:
		Brain(void);
		Brain(const Brain &copy);
		Brain	&operator=(const Brain &rhs);
		~Brain(void);

		void		set_idea(int i, std::string idea);
		std::string get_idea(const int i) const;
};

#endif