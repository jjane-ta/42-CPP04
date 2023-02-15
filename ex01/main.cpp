/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:46:03 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/15 19:50:29 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"

#include "Brain.hpp"


void	main_print_banner(std::string title);

int	main ( void )
{
	main_print_banner("Brain test");	
	{
		Brain brain;
		for (int i = 0; i < 101; i++)
			brain.add_thought("lo que sea");
		brain.print();
	
	}




/*
	main_print_banner("Main test");	
	{
		Animal *arrayAnimals[] = {new Dog, new Dog, new Cat, new Cat};

		for (int i = 0; i < 4; i++)
			arrayAnimals[i]->makeSound();











		for (int i = 0; i < 4; i++)
			delete arrayAnimals[i];
	}	

*/
	return 0;
}

void	main_print_banner(std::string title)
{	
	std::cout	<<	std::endl;
	std::cout	<<	std::setfill('*') << std::setw(title.size()) << "" << std::endl;
	std::cout	<<	title	<<	std::endl;
	std::cout	<<	std::setfill('*') << std::setw(title.size()) << "" << std::endl;
	std::cout	<<	std::endl;

}
