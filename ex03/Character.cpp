/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:37:42 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/20 19:42:00 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character ( std::string name) :
	_name(name)
{

	_inventory = new Slot(4); //constructor en profundidad
	std::cout << "Character " << name << " say hello!!" << std::endl;
}

Character::~Character ( void )
{
	delete _inventory;

/*
	for (unsigned int i = 0; i < Character::slots; i++)
	{
		if (!this->_inventory[i])
			delete this->_inventory[i];
	}

*/
	std::cout << "Character " << _name << " is destroyed!!" << std::endl;
}

Character::Character (const Character &character) : 
	_name(character._name)
{
	*this = character;
	std::cout << "Character copy constructor." << std::endl;
}

Character & Character::operator = (const Character &character)
{
	(void) character;		
	//copy all inventory
	std::cout << "Character copy operator. //TODO " << std::endl;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	this->_inventory->set(m);

/*
	if (!m)
		std::cout << "No is possible equip null materia" << std::endl;
		else
	{
		for (unsigned int i = 0; i < Character::slots; i++)
		{
			if (!this->_inventory[i])
			{
				this->_inventory[i] = m;
				std::cout << "Character " << this->_name << " equip "\
					<< m->getType() << " materia" << std::endl;
				break ;
			}
			if (i == Character::slots - 1)
			std::cout << "Character " << this->_name << " inventory is full." << std::endl;
		}
	}


*/
}

void	Character::unequip(int idx)
{


	if (idx < 0)// || (unsigned int)idx >= Character::slots)
		return ;
	this->_inventory->unset((unsigned int)idx);
//	this->_inventory[idx] = nullptr;
}

void	Character::use(int idx, ICharacter& target)
{
	(void)idx;
	(void)target;
	//falta implementar un getter


/*
	if (idx < 0 || (unsigned int)idx >= Character::slots || !this->_inventory[idx])
		return ;
	this->_inventory[idx]->use(target);
*/
}

