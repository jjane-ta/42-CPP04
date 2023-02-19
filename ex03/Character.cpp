/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:37:42 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 19:28:26 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character ( std::string name) :
	_name(name),
	_inventory{nullptr},
	_index(0);
{
	std::cout << "Character " << name << " say hello!!" << std::endl;
}

Character::~Character ( void )
{
	std::cout << "Character " << name << " is destroyed!!" << std::endl;
}

Character::Character (const Character &character) : 
{
	*this = character;
	std::cout << "Character copy constructor." << std::endl;
	return (*this);
}

Character & Character::operator = (const Character &character)
{
	

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
	if (!m)
		std::cout << "No is possible equip null materia" << std::endl;
		else
	{
		for (unsigned int i = 0; i < Character::slots; i++)
		{
			if (!this->_inventory[i])
			{
				this->_inventory[i] = m;
				std::cout << "Character " << this->_name << "equip "\
					<< m.type() << " materia" << std::endl;
				break ;
			}
			if (i == Character::slots - 1)
			std::cout << "Character " << this->_name << " inventory is full." << std::endl;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx < 0 || (unsigned int)idx >= Character::slots)
		return ();
	else
		this->_inventory[idx]




}




	virtual void use(int idx, ICharacter& target);

private:

	AMateria		*inventory[slots];
	unsigned int	index;

