/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 02:06:48 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 04:01:22 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.class.hpp"
#include "Dog.class.hpp"
#include "Cat.class.hpp"
#include "WrongAnimal.class.hpp"
#include "WrongCat.class.hpp"

int	main(void) {
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat();

	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	i->makeSound(); // What does the cat say?
	j->makeSound();
	meta->makeSound();
	std::cout << "\n" << std::endl;

	const WrongAnimal	*meta2 = new WrongAnimal();
	const Animal		*j2 = new Dog();
	const WrongAnimal	*i2 = new WrongCat();

	std::cout << j2->get_type() << " " << std::endl;
	std::cout << i2->get_type() << " " << std::endl;
	i2->makeSound(); // Must be the same as the last (WrongAnimal's).
	j2->makeSound();
	meta2->makeSound();
	std::cout << "\n" << std::endl;


	const Animal	*basico = new Animal();
	const Animal	*caramelo = new Dog();
	const Animal	*xaninha = new Cat();

	std::cout << "\nBásico é um " << basico->get_type()
			  << ".\nCaramelo é um " << caramelo->get_type()
			  << ".\nXaninha é um " << xaninha->get_type() << "." << std::endl;
	
	std::cout << "\nBásico faz: ";		basico->makeSound();
	std::cout << "Caramelo faz: ";	caramelo->makeSound();
	std::cout << "Xaninha faz: ";	xaninha->makeSound();
	std::cout << std::endl;
	
	delete basico;
	delete caramelo;
	delete xaninha;

	const WrongAnimal	*errado = new WrongAnimal();
	const WrongAnimal	*gaiato = new WrongCat();

	std::cout << "\nErrado é um " << errado->get_type()
			  << ".\nGaiata é um " << gaiato->get_type() << "." << std::endl;

	std::cout << "\nErrado faz: ";	errado->makeSound();
	std::cout << "Gaiata faz: ";	gaiato->makeSound();
	std::cout << std::endl;

	delete errado;
	delete gaiato;

	return (0);
}
