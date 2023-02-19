/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:16:27 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 15:19:23 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

const std::string Dog::color = "\033[0;33m";
const std::string Dog::reset_color = "\033[0m";

Dog::Dog ( void ) :
	Animal(),
	brain(new Brain())
{
	type = "Dog";
	std::cout << color;
	std::cout << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

Dog::~Dog ( void )
{
	std::cout << color;
	std::cout << this->type << " is destroyed!!" << std::endl;
	std::cout << reset_color;
	delete brain;
}

Dog::Dog (const Dog &dog) :
	Animal(dog),
	brain(new Brain())
{
	*this = dog;
	std::cout << color;
	std::cout << "Copy " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

Dog & Dog::operator = (const Dog &dog)
{
	this->type = dog.type;
	*this->brain = *dog.brain;

	std::cout << color;
	std::cout << "Copy operator " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
	return (*this);
}

void	Dog::makeSound( void ) const
{
	std::cout << color;
	std::cout << "Woof woof" << std::endl;
	std::cout << reset_color;
}

void	Dog::add_thought(std::string thought)
{
	this->brain->add_thought(thought);
}

void	Dog::print_brain( void )
{
	this->brain->print();
}
