/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:52:19 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/20 13:15:29 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __MATERIASOURCE_H__
# define __MATERIASOURCE_H__

# include "IMateriaSource.hpp"

// ************************************************************************** //
//                              MateriaSource Class                                
// ************************************************************************** //

class MateriaSource : public IMateriaSource
{

public:

	MateriaSource ( void );
	virtual ~MateriaSource ( void );
	MateriaSource (const MateriaSource &materiasource);
	MateriaSource & operator = (const MateriaSource &materiasource);

	virtual void learnMateria(AMateria* amateria);
	virtual AMateria* createMateria(std::string const & type);	

	static const unsigned int slots = 4;

private:

	AMateria	*_inventory[slots];

};
#endif /* __MATERIASOURCE_H__ */


