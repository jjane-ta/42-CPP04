/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:07:36 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/14 20:15:20 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGCAT_H__
# define __WRONGCAT_H__

# include "WrongAnimal.hpp"


// ************************************************************************** //
//                              WrongCat Class                                
// ************************************************************************** //

class WrongCat : public WrongAnimal
{

public:

	WrongCat ( void );
	~WrongCat ( void );
	WrongCat (const WrongCat &cat);
//	WrongCat & operator = (const WrongCat &cat);

	static const std::string	reset_color;
	static const std::string	color;


	virtual std::string	getType( void ) const;
	virtual void		makeSound( void ) const;

};
#endif /* __WRONGCAT_H__ */


