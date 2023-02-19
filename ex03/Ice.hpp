/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 17:09:06 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 18:25:24 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ICE_H__
# define __ICE_H__

# include "AMateria.hpp"
# include <string>

// ************************************************************************** //
//                              Ice Class                                
// ************************************************************************** //

class Ice : public AMateria
{

public:

	Ice ( void );

//	virtual ~Ice ( void );
	
/*
Ice (const Ice &ice);
//	Ice & operator = (const Ice &ice);
*/

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);

private:

};

#endif /* __ICE_H__ */
