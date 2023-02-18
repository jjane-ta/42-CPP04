/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:46:22 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/18 17:10:32 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __DOG_H__
# define __DOG_H__


# include "Animal.hpp"

// ************************************************************************** //
//                              Dog Class                                
// ************************************************************************** //

class Dog : public Animal
{

public:

	Dog ( void );
	~Dog ( void );
	Dog (const Dog &dog);
//	Dog & operator = (const Dog &dog);

	static const std::string	reset_color;
	static const std::string	color;

	
	virtual std::string	getType( void ) const;
	virtual void		makeSound( void ) const;




};
#endif /* __DOG_H__ */


