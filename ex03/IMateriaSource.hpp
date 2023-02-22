/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:49:57 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/21 14:48:15 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef __IMATERIASOURCE_H__
# define __IMATERIASOURCE_H__

# include <string>
# include "AMateria.hpp" 

// ************************************************************************** //
//                              IMateriaSource Class                                
// ************************************************************************** //

class IMateriaSource {

public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria * m) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;	
};
#endif /* __IMATERIASOURCE_H__ */
