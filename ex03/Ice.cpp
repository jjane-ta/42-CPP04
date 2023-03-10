/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:11:48 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/22 15:03:38 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice ( void ) : AMateria("ice") {}	

AMateria* Ice::clone() const
{
	return (new Ice());
}

void Ice::use(ICharacter& target)
{

	std::cout << "* shoots an " << this->getType() << " bolt at " << target.getName() << " *" << std::endl;
}


