/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:16:27 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 15:45:32 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

const std::string Cat::color = "\033[0;35m";
const std::string Cat::reset_color = "\033[0m";

Cat::Cat ( void ) :
	AAnimal(),
	brain(new Brain())
{
	type = "Cat";
	std::cout << color;
	std::cout << this->getType() << " say hello!!" << std::endl;
	std::cout << reset_color;
}

Cat::~Cat ( void )
{
	std::cout << color;
	std::cout << this->type << " is destroyed!!" << std::endl;
	std::cout << reset_color;
	delete this->brain;
}

Cat::Cat (const Cat &cat) :
	AAnimal(cat),
	brain(new Brain())
{
	*this = cat;
	std::cout << color;
	std::cout << "Copy " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

Cat & Cat::operator = (const Cat &cat)
{
	this->type = cat.type;
	*this->brain = *cat.brain;

	std::cout << color;
	std::cout << "Copy operator " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << color;
	std::cout << "Meow meow" << std::endl;
	std::cout << reset_color;
}

void	Cat::add_thought(std::string thought)
{
	this->brain->add_thought(thought);
}

void	Cat::print_brain( void )
{
	this->brain->print();
}
