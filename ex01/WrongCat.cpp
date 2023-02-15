/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:16:27 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/14 20:13:33 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

const std::string WrongCat::color = "\033[0;35m";
const std::string WrongCat::reset_color = "\033[0m";

WrongCat::WrongCat ( void ) : WrongAnimal()
{
	type = "WrongCat";
	std::cout << color;
	std::cout << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

WrongCat::~WrongCat ( void )
{
	std::cout << color;
	std::cout << this->type << " is destrtoyed!!" << std::endl;
	std::cout << reset_color;
}

WrongCat::WrongCat (const WrongCat &wrongCat) : WrongAnimal(wrongCat)
{
	type = "WrongCat";	
	std::cout << color;
	std::cout << "Copy " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

std::string	WrongCat::getType( void ) const
{
	return (color + this->WrongAnimal::getType() + reset_color);
}


void	WrongCat::makeSound( void ) const
{
	std::cout << color;
	std::cout << "Meow meow" << std::endl;
	std::cout << reset_color;
}
