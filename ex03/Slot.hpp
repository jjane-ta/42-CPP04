/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slot.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:43:09 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/21 18:10:39 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __SLOT_H__
# define __SLOT_H__

# include  "AMateria.hpp"
// ************************************************************************** //
//                              Slot Class                                
// ************************************************************************** //

class Slot; 
class Slot {

public:

	Slot ( void );
	~Slot ( void );
	Slot (const Slot & slot);
	Slot & operator = (const Slot & slot);

	Slot ( unsigned int deep );
	AMateria * getMateria_byType(std::string const & type);
	AMateria * getMateria_byIndex(unsigned int idx);
	
	void	add( AMateria *amateria );
	void	set( AMateria *amateria );
	void	unset( unsigned int index );
	void	clear( void );
	void	printInventory( void );
	
private:
	
	AMateria	*_materia;
	Slot		*_next;

	static Slot *floor; // Filled when unset at the end (garbage)
	
};




#endif /* __SLOT_H__ */


