/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjane-ta <jjane-ta@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 12:46:03 by jjane-ta          #+#    #+#             */
/*   Updated: 2023/02/14 20:14:05 by jjane-ta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"


void	main_print_banner(std::string title);

int	main ( void )
{
	main_print_banner("Subject test");	
	{
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();
		std::cout << std::endl;
		

		std::cout << meta->getType() << " == Animal. His sound is => ";	
		meta->makeSound();
		std::cout << i->getType() << " == Cat. His sound is => ";	
		i->makeSound();
		std::cout << j->getType() << " == Dog. His sound is => ";	
		j->makeSound();
		std::cout << std::endl;
	
		delete meta;
		delete i;
		delete j;

	}
	main_print_banner("Test copy operator");	
	{
		const Cat cat;
		Animal meta;
		meta = cat;

		std::cout << std::endl;
		std::cout << meta.getType() << " == Animal. His sound is => ";	
		meta.makeSound();
		
		std::cout << std::endl;
	}
	main_print_banner("Test copy constructor ");	
	{
		const Cat cat;

		const Animal meta(cat);

		std::cout << std::endl;
		std::cout << meta.getType() << " == Animal. His sound is => ";	
		meta.makeSound();
		std::cout << std::endl;
	}
	main_print_banner("test WrongAnimal => WrongCat");	
	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* i = new WrongCat();
		std::cout << std::endl;
		

		std::cout << meta->getType() << " == Animal. His sound is => ";	
		meta->makeSound();
		std::cout << i->getType() << " == Cat. His sound is => ";	
		i->makeSound();
			std::cout << std::endl;
	
		delete meta;
		delete i;
	}




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
