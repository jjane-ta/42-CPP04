/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:37:42 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/22 17:44:58 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character ( std::string name) :
	_name(name),
	_inventory(new Slot(Character::slots))
{
	std::clog << "Character " << name << " say hello!!" << std::endl;
}

Character::~Character ( void )
{
	if (_inventory)
	delete this->_inventory;
	std::clog << "Character " << this->_name << " is destroyed!!" << std::endl;
}

Character::Character (const Character &character) : 
	_name(character._name),
	_inventory(new Slot(Character::slots))
{
	*this = character;
	std::clog << "Character copy constructor." << std::endl;
}

Character & Character::operator = (const Character &character)
{
	*this->_inventory = *character._inventory;
	std::clog << "Character copy operator." << std::endl;
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{	
	if (m)
		std::clog << "Character equip materia" << std::endl;
	else
		std::clog << "Character Nothing to equip" << std::endl;

	this->_inventory->set(m);
}

void	Character::unequip(int idx)
{
	if (idx < 0)
		return ;
	this->_inventory->unset((unsigned int)idx);
}

void	Character::use(int idx, ICharacter& target)
{
	AMateria *amateria;
	if (idx < 0)
		return ;
	amateria = this->_inventory->getMateria_byIndex(idx);
	if (amateria)
		amateria->use(target);
}

void Character::print( void )
{
	std::cout << "Character name => " << this->_name << std::endl;
	std::cout << "Inventory:" << std::endl;
	this->_inventory->printInventory();
}
