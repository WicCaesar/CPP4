/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:06:48 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 20:10:09 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include <cstdlib>

int	main(void) {
	srand(time(NULL)); // Setting seed for random number generator.

	const Animal	*j = new Dog();
	const Animal	*i = new Cat();
	//const Animal	*h = new Animal(); // Won't compile because it's abstract.

	delete j;
	delete i;
	std::cout << std::endl;

	Animal	*animals[4];

	for (int i = 0; i < 4; i += 2) {
		animals[i] = new Cat();
		animals[i + 1] = new Dog();
	}

	//for (int i = 0; i < 6; i++) {
	for (int i = 0; i < (int)(sizeof(animals) / sizeof(animals[0])); i++) {
		delete animals[i];
	}
	std::cout << std::endl;

	// Test whether copy is deep or shallow.
	// If deep, the copy will have its own brain, the others won't be affected.
	// If shallow, they all share the same brain and all will be affected.
	Cat* Xitara = new Cat();
	Cat* Tatita = new Cat(*Xitara);
	Cat* Catuxa = new Cat();
	*Catuxa = *Xitara;

	std::cout << std::endl;
	std::cout << "Xitara: " << Xitara->get_brain()->get_idea(5) << std::endl;
	std::cout << "Tatita: " << Tatita->get_brain()->get_idea(5) << std::endl;
	std::cout << "Catuxa: " << Catuxa->get_brain()->get_idea(5) << std::endl;
	Xitara->get_brain()->set_idea(5, "Quero xamegar com um gatinho.");
	std::cout << "Xitara: " << Xitara->get_brain()->get_idea(5) << std::endl;
	std::cout << "Tatita: " << Tatita->get_brain()->get_idea(5) << std::endl;
	std::cout << "Catuxa: " << Catuxa->get_brain()->get_idea(5) << std::endl;
	std::cout << std::endl;
	delete Xitara; delete Tatita; delete Catuxa;
	std::cout << std::endl;

	return (0);
}
