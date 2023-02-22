/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:52:19 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/22 16:04:56 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MATERIASOURCE_H__
# define __MATERIASOURCE_H__

# include <iostream>
# include "IMateriaSource.hpp"
# include "Slot.hpp"

// ************************************************************************** //
//                              MateriaSource Class                                
// ************************************************************************** //

typedef Slot Inventory;

class MateriaSource : public IMateriaSource
{

public:

	MateriaSource ( void );
	virtual ~MateriaSource ( void );
	MateriaSource (const MateriaSource &materiasource);
	MateriaSource & operator = (const MateriaSource &materiasource);

	virtual void learnMateria(AMateria * m);
	virtual AMateria* createMateria(std::string const & type);	
	
	void print( void );

	static const unsigned int slots = 4;

private:

	Inventory	*_inventory;

};
#endif /* __MATERIASOURCE_H__ */


