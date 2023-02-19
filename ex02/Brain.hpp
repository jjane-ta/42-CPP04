/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:07:55 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/18 18:28:40 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __BRAIN_H__
# define __BRAIN_H__

#include <string>
#include <iostream>

// ************************************************************************** //
//                              Brain Class                                
// ************************************************************************** //

class Brain {

public:

	Brain ( void );
	~Brain ( void );
	Brain (const Brain *brain);
	Brain & operator = (const Brain &brain);

	void	print( void ) const;
	void	add_thought(std::string thought);

	static const unsigned int max_thoughts = 100;	

private:
	unsigned int	index;
	std::string	thoughts[max_thoughts];

};
#endif /* __BRAIN_H__ */


