/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 16:07:36 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 15:44:44 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __CAT_H__
# define __CAT_H__

# include "AAnimal.hpp"
# include "Brain.hpp"


// ************************************************************************** //
//                              Cat Class                                
// ************************************************************************** //

class Cat : public AAnimal
{

public:

	Cat ( void );
	virtual ~Cat ( void );
	Cat (const Cat &cat);
	Cat & operator = (const Cat &cat);

	static const std::string	reset_color;
	static const std::string	color;

	virtual void	makeSound( void ) const;

	void	add_thought(std::string thought);
	void	print_brain( void );

private:

	Brain *brain;

};

#endif /* __CAT_H__ */
