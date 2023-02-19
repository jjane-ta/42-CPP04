/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:46:03 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/19 15:48:11 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Dog.hpp"
#include "Cat.hpp"
#include "AAnimal.hpp"

#include "Brain.hpp"


void	main_print_banner(std::string title);

int	main ( void )
{
	main_print_banner("Subject const test");	
	{
		const AAnimal* j = new Dog();
		const AAnimal* i = new Cat();
		delete j;//should not create a leak
		delete i;
	}
	main_print_banner("Brain with 101 thoughts");	
	{
		Brain brain;
		for (int i = 0; i < 101; i++)
			brain.add_thought("lo que sea");
		//brain.print();
	}
	main_print_banner("Cat and dog with 101 thoughts");	
	{
		Cat cat;
		for (int i = 0; i < 101; i++)
			cat.add_thought("lo que sea");
		std::cout << std::endl;
		Dog dog;
		for (int i = 0; i < 101; i++)
			dog.add_thought("lo que sea");
		std::cout << std::endl;
	}
	main_print_banner("Cat and Dog copy operator test");	
	{
		Cat *cat = new Cat();
		Cat *cat2 = new Cat();
		
		std::cout << std::endl;
		std::cout << "CHECK BRAIN IS EMPTY\n";
		cat->print_brain();
		cat2->print_brain();
		std::cout << std::endl;
		std::cout << "ADD ONE THOUGHT" << std::endl;
		cat->add_thought("Cat 1 thought");
		std::cout << std::endl;
		std::cout << "CAT 1 = CAT 2" << std::endl;
		*cat2 = *cat;
		std::cout << std::endl;
		std::cout << "CAT 1 print and delete" << std::endl;
		cat->print_brain();
		delete cat;
		std::cout << "CAT 2 print" << std::endl;
		cat2->print_brain();
		std::cout << std::endl;
		delete cat2;
		std::cout << std::endl;
		Dog *dog = new Dog();
		Dog *dog2 = new Dog();
		
		std::cout << std::endl;
		std::cout << "CHECK BRAIN IS EMPTY\n";
		dog->print_brain();
		dog2->print_brain();
		std::cout << std::endl;
		std::cout << "ADD ONE THOUGHT" << std::endl;
		dog->add_thought("Dog 1 thought");
		std::cout << std::endl;
		std::cout << "Dog 1 = Dog 2" << std::endl;
		*dog2 = *dog;
		std::cout << std::endl;
		std::cout << "dog 1 print and delete" << std::endl;
		dog->print_brain();
		delete dog;
		std::cout << "dog 2 print" << std::endl;
		dog2->print_brain();
		std::cout << std::endl;
		delete dog2;
	}
	main_print_banner("Cat and Dog copy constructor test");	
	{
		Cat *cat = new Cat();
		std::cout << std::endl;
		std::cout << "ADD ONE THOUGHT" << std::endl;
		cat->add_thought("Cat 1 thought");
		cat->print_brain();
		std::cout << std::endl;
		Cat *cat2 = new Cat(*cat);
		cat2->print_brain();
		std::cout << std::endl;
		std::cout << "CAT 1 delete" << std::endl;
		delete cat;
		std::cout << "CAT 2 print" << std::endl;
		cat2->print_brain();
		std::cout << std::endl;
		delete cat2;
		std::cout << std::endl;
		Dog *dog = new Dog();
		std::cout << std::endl;
		std::cout << "ADD ONE THOUGHT" << std::endl;
		dog->add_thought("Dog 1 thought");
		dog->print_brain();
		std::cout << std::endl;
		Dog *dog2 = new Dog(*dog);
		dog2->print_brain();
		std::cout << std::endl;
		std::cout << "Dog 1 delete" << std::endl;
		delete dog;
		std::cout << "dog 2 print" << std::endl;
		dog2->print_brain();
		std::cout << std::endl;
		delete dog2;
		std::cout << std::endl;
	}
	main_print_banner("Subject test");	
	{
		AAnimal *arrayAAnimals[] = {new Dog, new Dog, new Cat, new Cat};
		std::cout << std::endl;
		for (int i = 0; i < 4; i++)
			arrayAAnimals[i]->makeSound();
		std::cout << std::endl;
		for (int i = 0; i < 4; i++)
			delete arrayAAnimals[i];
		std::cout << std::endl;

	}
/*

	main_print_banner("Try instantiate AAnimal class");
	{
		AAnimal aanimal;
		aanimal.makeSound();
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
