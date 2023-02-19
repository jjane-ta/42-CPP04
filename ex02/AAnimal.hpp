/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:07:44 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 15:44:13 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __AANIMAL_H__
# define __AANIMAL_H__

# include <iostream>
# include <string>

// ************************************************************************** //
//                              Animal Class                                
// ************************************************************************** //

class AAnimal {

public:

	AAnimal ( void );
	virtual ~AAnimal ( void );
	AAnimal (const AAnimal &aanimal);
	AAnimal & operator = (const AAnimal &aanimal);

	std::string	getType( void ) const;
	virtual void		makeSound( void ) const = 0; 
	
	static const std::string	reset_color;
	static const std::string	color;

protected:

	std::string type;
};

#endif /* __ANIMAL_H__ */
