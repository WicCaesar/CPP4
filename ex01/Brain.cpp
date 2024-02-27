/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cnascime <cnascime@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 12:57:26 by cnascime          #+#    #+#             */
/*   Updated: 2024/02/23 16:25:43 by cnascime         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.class.hpp"
# include <cstdlib>

static std::string	RandomThoughts(void);

Brain::Brain(void) {
	std::cout << "Há atividade cerebral." << std::endl;
	// Populate with ideas
	for (int i = 0; i < 100; i++) {
		this->ideas_[i] = RandomThoughts();
	}
};

static std::string	RandomThoughts(void) {
	std::string	thoughts[] = {
		"Que vontade de comer.", "Que vontade de dormir.", "Quero sair daqui.",
		"Que fome.", "Que sono.", "Que preguicinha.", "Queria ver meus amigos.",
		"Queria tanto morder um rabo…", "Que cheiro é esse?", "Que som é esse?",
		"Quero brincar.", "Quero passear.", "Quero comida!", "Quero descansar.",
		"Quero tomar sol.", "Quero fugir desse lugar.", "Queria estar em casa.",
		"Queria estar na cama.", "Queria vagar por aí.", "Sou mesmo selvagem.",
		"O que eu estou fazendo aqui?", "O que eu estou fazendo da minha vida?",
		"Que calor!", "Está um pouco frio.", "Que sede.", "Que sede de sangue!",
		"Queria viver uma aventura.", "Quero é rasgar tudo!", "Eu sou do mal.",
		"Eu sou genial.", "Eu sou bem idiota.", "Por que meu irmãozinho sumiu?",
		"Será que eu não sou o que penso?", "O que aquele humano está fazendo?",
		"O que veio primeiro, o ovo ou a galinha?", "O que é exatamente viver?",
		"Joguei pedra na cruz?", "Eu mereço amor?", "Eu quero jogar um jogo.",
		"Estou no cio.", "Que comece a carnificina!", "Tão bom estar em paz.",
		"Somos mesmo livres?", "O mundo é real?", "Devo me inscrever no BBB?",
		"Queria viver um romance.", "Não achei graça nenhuma.", "Estou triste.",
		"Estou feliz.", "Estou com medo.", "Estou com raiva.", "Cadê meu rabo?",
		"Será que um dia essa tristeza vai acabar?", "Cadê meu brinquedinho?",
		"Quando será o meu aniversário?", "Falta muito para o meu aniversário?",
		"Arr! Eu sou um pirata!", "Eu sou uma fraude.", "Isso é tão divertido!",
		"Isso é muito chato.", "Isso é deveras estranho.", "Hoje é um bom dia.",
		"Que boa ideia!", "Má ideia.", "Isso não me cheira bem.", "Cansei.",
	};
	return (thoughts[rand() % 66]);
};

// Shallow copy: copies the pointer, not the object itself.
// Changing the copy also changes the original, and vice-versa.
/*Brain::Brain(const Brain &copy) {
	*this = copy;
	std::cout << "Pensamentos efêmeros alinhados." << std::endl;
};
*/

// Deep copy: allocates memory and then copies the object itself.
Brain::Brain(const Brain &copy) {
	for (int i = 0; i < 100; i++)
		this->ideas_[i] = copy.ideas_[i];
	std::cout << "Pensamentos profundamente alinhados." << std::endl;
};

Brain	&Brain::operator=(const Brain &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->ideas_[i] = rhs.ideas_[i];
	}
	std::cout << "Pensamentos profundamente alinhados." << std::endl;
	return (*this);
};

Brain::~Brain(void) {
	for (int i = 0; i < 100; i++)
		this->ideas_[i].clear();
	std::cout << "Morte cerebral." << std::endl;
};

void	Brain::set_idea(int i, std::string idea) {
	this->ideas_[i].clear();
	this->ideas_[i] = idea;
};

std::string Brain::get_idea(const int i) const {
	return (this->ideas_[i]);
};
