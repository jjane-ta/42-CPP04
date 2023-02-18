/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:07:44 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/18 17:09:50 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __ANIMAL_H__
# define __ANIMAL_H__

# include <iostream>
# include <string>

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
};

#endif /* __ANIMAL_H__ */
