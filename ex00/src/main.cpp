/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:47:20 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:47:20 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <Cat.hpp>
#include <WrongDog.hpp>
#include <WrongCat.hpp>
#include <iostream>

void	correct() {

	std::cout << "--- correct ---" << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;
}

void	wrong() {

	std::cout << "--- wrong ---" << std::endl;

	const WrongAnimal* meta = new WrongAnimal();
	const WrongAnimal* j = new WrongDog();
	const WrongAnimal* i = new WrongCat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the wrong animal sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j; // This will only call the WrongAnimal destructor, not the wrongDog as well
	delete i;
}

void	extra() {

	std::cout << "--- extra ---" << std::endl;

	Cat		cat = Cat();
	Dog		dog = Dog();

	Animal	*cat2 = &cat;
	Animal	*dog2 = &dog;

	std::cout << cat2->getType() << std::endl;
	std::cout << dog2->getType() << std::endl;

	// Even though these 2 are Animal pointers, they behave like the animals they are!

	cat.makeSound();
	cat2->makeSound();
	dog.makeSound();
	dog2->makeSound();
}

int	main() {
	correct();
	wrong();
	extra();
}
