/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:40:43 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/22 15:03:54 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) : 
	type(type)
{
	std::clog << "AMateria " << type << " created." << std::endl;
}

AMateria::~AMateria ( void )
{
	std::clog << "AMateria destroyed." << std::endl;
}

AMateria::AMateria (const AMateria &amateria) : 
	type(amateria.type)
{
	std::clog << "AMateria copy constructor." << std::endl;
}

AMateria & AMateria::operator = (const AMateria &amateria)
{
	(void)amateria;
	std::clog << "AMateria copy operator. NOTHING TO DO" << std::endl;
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
