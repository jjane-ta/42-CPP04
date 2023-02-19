/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:25:53 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 18:40:04 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ICHARACTER_H__
# define __ICHARACTER_H__

# include <string>
# include "AMateria.hpp"

class AMateria;

// ************************************************************************** //
//                              ICharacter Class                                
// ************************************************************************** //

class ICharacter {

public:
	
	virtual ~ICharacter() {}
	virtual std::string const & getName() const = 0;
	virtual void equip(AMateria* m) = 0;
	virtual void unequip(int idx) = 0;
	virtual void use(int idx, ICharacter& target) = 0;

};
#endif /* __ICHARACTER_H__ */


