/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:16:27 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/15 14:49:49 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

const std::string WrongAnimal::color = "\033[0;38m";
const std::string WrongAnimal::reset_color = "\033[0m";

WrongAnimal::WrongAnimal ( void ) :
	type("WrongAnimal")	
{
	std::cout << color;
	std::cout << "WrongAnimal type " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

WrongAnimal::~WrongAnimal ( void )
{
	std::cout << color;
	std::cout << "WrongAnimal type " << this->type << " is destrtoyed!!" << std::endl;
	std::cout << reset_color;
}

WrongAnimal::WrongAnimal (const WrongAnimal &wrongAnimal)
{
	(void) wrongAnimal;	
	type = "WrongAnimal";
	std::cout << color;
	std::cout << "Copy WrongAnimal type " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}


WrongAnimal & WrongAnimal::operator = (const WrongAnimal &wrongAnimal)
{
	(void) wrongAnimal;
	//this->type = wrongAnimal.type;	
	return (*this);
}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

void	WrongAnimal::makeSound( void ) const
{
	std::cout << color;
	std::cout << "[*** WrongAnimal Sound ***]" << std::endl;
	std::cout << reset_color;
}
