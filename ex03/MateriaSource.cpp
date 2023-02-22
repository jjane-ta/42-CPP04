/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 14:33:08 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/22 17:20:03 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource ( void ) : 
	_inventory(new Inventory(MateriaSource::slots))
{
	std::clog << "MateriaSource created" << std::endl;
}

MateriaSource::~MateriaSource ( void )
{
	delete this->_inventory;
	std::clog << "MateriaSource Destroyed" << std::endl;
}

MateriaSource::MateriaSource (const MateriaSource &materiasource) : 
	_inventory(new Inventory(MateriaSource::slots))
{
	*this = materiasource;
	std::clog << "MateriaSource constructor copy." << std::endl;
}

MateriaSource & MateriaSource::operator = (const MateriaSource &materiasource)
{
	*this->_inventory = *materiasource._inventory;
	std::clog << "MateriaSource copy operator" << std::endl;
	return (*this);
}

void MateriaSource::learnMateria(AMateria * m)
{
	if (m)
		std::clog << "MateriaSource learn" << std::endl;
	else
		std::clog << "MateriaSource Nothing to learn" << std::endl;
	this->_inventory->set(m);
}

AMateria *MateriaSource::createMateria(std::string const & type)
{	
	AMateria *amateria = this->_inventory->getMateria_byType(type);
	if (amateria)
		return (amateria->clone());
	return (nullptr);
}

void MateriaSource::print( void )
{
	std::cout << "MateriaSource Inventory:" << std::endl;
	this->_inventory->printInventory();
}
