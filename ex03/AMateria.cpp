/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:40:43 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 18:28:29 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : 
	type(type)
{
	std::cout << "AMateria " << type << " created." << std::endl;
}

AMateria::~AMateria ( void )
{
	std::cout << "AMateria destroyed." << std::endl;
}

AMateria::AMateria (const AMateria &amateria) 
{
	(void) amateria;

	std::cout << "AMateria copy constructor. NADA" << std::endl;
}

AMateria & AMateria::operator = (const AMateria &amateria)
{

	(void)amateria;
	//TODO


	std::cout << "AMateria copy operator. NADA" << std::endl;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << "* laughs at " << target.getName() << " *" << std::endl;
}

