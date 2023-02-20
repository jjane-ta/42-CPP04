/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:30:41 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/20 19:39:11 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CHARACTER_H__
# define __CHARACTER_H__

# include "ICharacter.hpp"
# include "AMateria.hpp"
# include "Slot.hpp"

typedef Slot Inventory;

// ************************************************************************** //
//                              Character Class                                
// ************************************************************************** //

class Character : public ICharacter
{

public:

	Character ( std::string name );
	~Character ( void );
	Character (const Character &character);
	Character & operator = (const Character &character);

	static const unsigned int slots = 4;
	
	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);

	Inventory	*_inventory;




private:

	const std::string	_name;
	
};
#endif /* __CHARACTER_H__ */


