/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:09:06 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/21 18:19:48 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CURE_H__
# define __CURE_H__

# include "AMateria.hpp"
# include <string>

// ************************************************************************** //
//                              Cure Class                                
// ************************************************************************** //

class Cure : public AMateria
{

public:

	Cure ( void );

//	virtual ~Cure ( void );
	
/*
Cure (const Cure &cure);
//	Cure & operator = (const Cure &cure);
*/

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

private:

};

#endif /* __CURE_H__ */
