/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:31:47 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 18:08:46 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AMATERIA_H__
# define __AMATERIA_H__

# include <iostream>
# include "ICharacter.hpp"

class ICharacter;

// ************************************************************************** //
//                              AMateria Class                                
// ************************************************************************** //

class AMateria {

public:

	AMateria(std::string const & type);
	virtual ~AMateria ( void );
	AMateria (const AMateria &amateria);
	AMateria & operator = (const AMateria &amateria);

	std::string const & getType() const; //Returns the materia type
	
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

protected:
	const	std::string type;

};

#endif /* __AMATERIA_H__ */
