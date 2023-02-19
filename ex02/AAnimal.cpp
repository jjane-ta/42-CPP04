/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:16:27 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 15:47:07 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

const std::string AAnimal::color = "\033[0;36m";
const std::string AAnimal::reset_color = "\033[0m";

AAnimal::AAnimal ( void ) :
	type("AAnimal")
{
	std::cout << color;
	std::cout << "AAnimal type " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
}

AAnimal::~AAnimal ( void )
{
	std::cout << color;
	std::cout << "AAnimal type " << this->type << " is destroyed!!" << std::endl;
	std::cout << reset_color;
}

AAnimal::AAnimal (const AAnimal &aanimal)
{
	std::cout << color;
	std::cout << "Copy AAnimal type " << this->type << " say hello!!" << std::endl;
	std::cout << reset_color;
	*this = aanimal;
}

AAnimal & AAnimal::operator = (const AAnimal &aanimal)
{
	this->type = aanimal.type;
	std::cout << color;
	std::cout << "Operator copy " << this->type << " inherit from AAnimal." << std::endl;
	std::cout << reset_color;
	return (*this);
}

std::string	AAnimal::getType( void ) const
{
	return (this->type);
}

void	AAnimal::makeSound( void ) const
{
	std::cout << color;
	std::cout << "[*** AAnimal Sound ***]" << std::endl;
	std::cout << reset_color;
}

