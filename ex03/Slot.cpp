/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slot.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:50:41 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/20 19:40:52 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Slot.hpp"

Slot * Slot::garbage = new Slot();

Slot::Slot ( void ) : 
	_materia(nullptr),
	_next(nullptr)	
{
	std::clog << "Slot created" << std::endl;
}

Slot::~Slot ( void )
{
	this->clear();
	std::clog << "Slot item deleted" << std::endl;
}

Slot::Slot (const Slot & slot) :
	_materia(nullptr),
	_next(nullptr)	
{
	*this = slot; 
	std::clog << "Slot copy constructor" << std::endl;
}

Slot & Slot::operator = (const Slot & slot)
{
	this->clear();
	if (slot._materia)
		this->_materia = slot._materia->clone();
	if (slot._next)
	{
		this->_next = new Slot();
		*this->_next = *slot._next;		
	}	
	return (*this);
}

void	Slot::add( AMateria *amateria )
{
	if (amateria)
	{
		if (!this->_materia)
			this->_materia = amateria;
		else
		{
			if (!this->_next)
			{
				this->_next = new Slot();
				this->_next->_materia = amateria;
			}
			else
				this->_next->add(amateria);
		}
	}
}

void	Slot::set( AMateria *amateria )
{
	if (amateria)
	{
		if (!this->_materia)
			this->_materia  = amateria;
		else 
		{
			if (this->_next)		
				this->_next->set( amateria);
		}
	}
}

void	Slot::unset(unsigned int index)
{
	if (!index)
	{
		Slot::garbage->add(this->_materia);
		this->_materia = nullptr; 
	}
	else
	{
		if (this->_next)
			this->_next->unset(--index);
	}
}


void	Slot::clear( void )
{
	if (this->_materia)
		delete this->_materia;
	this->_materia = nullptr;
	if (this->_next)
		delete this->_next;
	this->_next = nullptr;
}

void	Slot::printInventory( void )
{
	if (this->_materia)
		std::cout << this->_materia->getType() << std::endl;
	else
		std::cout << "(null)" << std::endl;

	if (this->_next)
		this->_next->printInventory();
}
