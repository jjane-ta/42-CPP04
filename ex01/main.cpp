/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:46:03 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/18 19:10:53 by jjane-ta         ###   ########.fr       */
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
/*
	main_print_banner("Brain test");	
	{
		Brain brain;
		for (int i = 0; i < 101; i++)
			brain.add_thought("lo que sea");
		//brain.print();
	}
	main_print_banner("Brain test");	
	{
		Cat cat;

		//	cat.brain->print(); // brain is a privete member of Cat
	
		for (int i = 0; i < 101; i++)
			cat.add_thought("lo que sea");
		//brain.print();
	}
*/
	main_print_banner("Brain test");	
	{
		Cat cat;
		Cat cat2;
		
		std::cout << std::endl;
		std::cout << "CHECK BRAIN IS EMPTY\n";
		cat.print_brain();
		cat2.print_brain();
		std::cout << std::endl;
		std::cout << "ADD ONE THOUGHT" << std::endl;
		cat.add_thought("Cat 1 thought");
		std::cout << std::endl;
		std::cout << "CAT 1 = CAT 2" << std::endl;
		cat2 = cat;
		std::cout << std::endl;


			

//		Dog dog;
//		dog.add_thought("Dog thought");
	
	//	Animal *a_cat = new Cat();
	//	Animal *a_dog = &dog;
			 
		


		cat.print_brain();
		std::cout << std::endl;
		cat2.print_brain();


	//	a_cat->print_brain();
	
	
//		a_dog = a_cat;
//		dog.print_brain();
	//delete a_cat;
		
				
		
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
