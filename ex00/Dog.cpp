/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:16:27 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/14 19:55:22 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

const std::string Dog::color = "\033[0;33m";
const std::string Dog::reset_color = "\033[0m";

Dog::Dog ( void ) : Animal()
{
	type = "Dog";
	std::cout << color;
	std::cout << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

Dog::~Dog ( void )
{
	std::cout << color;
	std::cout << this->type << " is destrtoyed!!" << std::endl;
	std::cout << reset_color;
}

Dog::Dog (const Dog &dog) : Animal(dog)
{
	type = "Dog";
	std::cout << color;
	std::cout << "Copy " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

std::string	Dog::getType( void ) const
{
	return (color + this->Animal::getType() + reset_color);
}


void	Dog::makeSound( void ) const
{
	std::cout << color;
	std::cout << "Woof woof" << std::endl;
	std::cout << reset_color;
}
