/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:11:48 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 18:39:44 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice ( void ) : AMateria("ice") {}	
	//istd::cout << "hola";	

//Ice::~Ice ( void ) {}

//	Ice (const Ice &ice);
//	Ice & operator = (const Ice &ice);


AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

