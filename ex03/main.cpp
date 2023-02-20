/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:27:23 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/20 19:39:34 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include "Ice.hpp"

#include "Character.hpp"

#include "Slot.hpp"


int	main(int argc, char *argv[])
{

//	std::clog.setstate(std::ios_base::failbit);

	(void) argc;
	(void) argv;

	//TODO
/*
	Ice ice;
	AMateria *amateria = ice.clone();
*/

/*
	Inventory inv;

	inv.add(new Ice());
	inv.add(new Ice());
	inv.add(new Ice());
	inv.add(new Ice());

	std::cout << std::endl;
	inv.printInventory();
	std::cout << std::endl;

	Inventory inv2;

	inv2 = inv;

	
	std::cout << std::endl;
	inv2.printInventory();
	std::cout << std::endl;

	Inventory inv3 = Inventory(inv2);

	std::cout << std::endl;
	inv3.printInventory();
	std::cout << std::endl;



	inv3.unset(1);
	inv3.unset(3);
	std::cout << std::endl;

	inv3.printInventory();
	std::cout << std::endl;
	

	inv3.set(new Ice());
std::cout << std::endl;

	inv3.printInventory();
	std::cout << std::endl;


	*/

	Character * me = new Character("me");
	me->equip(new Ice());


	me->_inventory->printInventory();

	

	delete me;






	



//	delete amateria;











	return (0);
}

