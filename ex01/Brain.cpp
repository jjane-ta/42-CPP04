/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 19:15:50 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/15 19:52:08 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain ( void )
{
	this->index = 0;
	std::cout << "Brain created." << std:: endl;
}

Brain::~Brain ( void )
{
	std::cout << "Brain destroyed." << std::endl;
}

Brain::Brain (const Brain &brain)
{
	*this = brain;
	std::cout << "Copy Brain created." << std::endl;
}

Brain & Brain::operator = (const Brain &brain)
{
	this->index = brain.index;
	for (unsigned int i = 0; i << this->index; i++)
		this->thoughts[i] =  brain.thoughts[i];
	return (*this);
}

void	Brain::print( void ) const
{
	for (unsigned int i = 0; i < this->index; i++)
		std::cout << this->thoughts[i] << std::endl;
}

void	Brain::add_thought(std::string thought)
{
	if (this->index >= Brain::max_thoughts)
		std::cout << "Brain is full." << std::endl;
	else
	{
		this->thoughts[this->index] = "[thought " +  std::to_string(this->index + 1) + "] " +thought;
		this->index++;
	}
}
