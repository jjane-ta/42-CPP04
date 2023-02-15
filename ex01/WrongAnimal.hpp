/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:07:44 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/14 20:15:10 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __WRONGANIMAL_H__
# define __WRONGANIMAL_H__

# include <iostream>
# include <string>
// ************************************************************************** //
//                              WrongAnimal Class                                
// ************************************************************************** //

class WrongAnimal {

public:

	WrongAnimal ( void );
	virtual ~WrongAnimal ( void );
	WrongAnimal (const WrongAnimal &wrongAnimal);
	WrongAnimal & operator = (const WrongAnimal &wrongAnimal);

	virtual std::string	getType( void ) const;
	void		makeSound( void ) const; 
	
	static const std::string	reset_color;
	static const std::string	color;

protected:
	std::string type;

};
#endif /* __ANIMAL_H__ */


