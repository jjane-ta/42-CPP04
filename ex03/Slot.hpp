/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Slot.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 13:43:09 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/20 19:32:28 by jjane-ta         ###   ########.fr       */
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

	void	add( AMateria *amateria );
	void	set( AMateria *amateria );
	void	unset( unsigned int index );
	void	clear( void );
	void	printInventory( void );

	static Slot *garbage;

private:
	
	
	AMateria	*_materia;
	Slot		*_next;

	
};




#endif /* __SLOT_H__ */


