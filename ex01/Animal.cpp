/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:16:27 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/18 19:00:39 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

const std::string Animal::color = "\033[0;38m";
const std::string Animal::reset_color = "\033[0m";

Animal::Animal ( void ) :
	type("Animal")
{
	std::cout << color;
	std::cout << "Animal type " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

Animal::~Animal ( void )
{
	std::cout << color;
	std::cout << "Animal type " << this->type << " is destroyed!!" << std::endl;
	std::cout << reset_color;
}

Animal::Animal (const Animal &animal)
{
	*this = animal;
	std::cout << color;
	std::cout << "Copy Animal type " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

Animal & Animal::operator = (const Animal &animal)
{
	this->type = animal.type;
	std::cout << color;
	std::cout << "Operator copy " << this->type << " inherit from Animal." << std::endl;
	std::cout << reset_color;
	return (*this);
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

void	Animal::makeSound( void ) const
{
	std::cout << color;
	std::cout << "[*** Animal Sound ***]" << std::endl;
	std::cout << reset_color;
}

