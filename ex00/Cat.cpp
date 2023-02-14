/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:16:27 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/14 19:55:36 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

const std::string Cat::color = "\033[0;35m";
const std::string Cat::reset_color = "\033[0m";

Cat::Cat ( void ) : Animal()
{
	type = "Cat";
	std::cout << color;
	std::cout << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

Cat::~Cat ( void )
{
	std::cout << color;
	std::cout << this->type << " is destrtoyed!!" << std::endl;
	std::cout << reset_color;
}

Cat::Cat (const Cat &cat) : Animal(cat)
{
	type = "Cat";	
	std::cout << color;
	std::cout << "Copy " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

std::string	Cat::getType( void ) const
{
	return (color + this->Animal::getType() + reset_color);
}


void	Cat::makeSound( void ) const
{
	std::cout << color;
	std::cout << "Meow meow" << std::endl;
	std::cout << reset_color;
}
