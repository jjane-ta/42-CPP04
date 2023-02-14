/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:07:36 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/14 18:55:12 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_H__
# define __CAT_H__

# include "Animal.hpp"


// ************************************************************************** //
//                              Cat Class                                
// ************************************************************************** //

class Cat : public Animal
{

public:

	Cat ( void );
	~Cat ( void );
	Cat (const Cat &cat);
//	Cat & operator = (const Cat &cat);

	static const std::string	reset_color;
	static const std::string	color;


	virtual std::string	getType( void ) const;
	virtual void		makeSound( void ) const;

};
#endif /* __CAT_H__ */


