/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:07:44 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/15 19:14:53 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <iostream>
# include <string>
# include "Brain.hpp"

// ************************************************************************** //
//                              Animal Class                                
// ************************************************************************** //

class Animal {

public:

	Animal ( void );
	virtual ~Animal ( void );
	Animal (const Animal &animal);
	Animal & operator = (const Animal &animal);

	virtual std::string	getType( void ) const;
	virtual void		makeSound( void ) const; 
	
	static const std::string	reset_color;
	static const std::string	color;

protected:
	std::string type;
	Brain	brain;

};

#endif /* __ANIMAL_H__ */
