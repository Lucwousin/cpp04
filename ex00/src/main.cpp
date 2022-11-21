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
	std::cout << meta->getType() << std::endl;
	meta->makeSound();
	delete meta;
	std::cout << '\n';

	const Animal* i = new Cat();
	std::cout << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	delete i;
	std::cout << '\n';

	const Animal* j = new Dog();
	std::cout << j->getType() << std::endl;
	j->makeSound();
	delete j;
	std::cout << '\n';
}

void	wrong() {

	std::cout << "--- wrong ---" << std::endl;

	const WrongAnimal* meta = new WrongAnimal();
	meta->makeSound();
	delete meta;
	std::cout << '\n';

	const WrongAnimal* i = new WrongCat();
	std::cout << i->getType() << std::endl;
	i->makeSound(); //will output the cat sound!
	delete i;
	std::cout << '\n';

	const WrongAnimal* j = new WrongDog();
	std::cout << j->getType() << std::endl;
	j->makeSound();
	delete j;
	std::cout << '\n';
}

void	extra() {

	std::cout << "--- extra ---" << std::endl;

	const Cat *cat = new Cat();
	const Animal *copy = new Animal(*cat);

	std::cout << cat->getType() << std::endl;
	cat->makeSound();
	delete cat;
	std::cout << '\n';

	std::cout << copy->getType() << std::endl;
	copy->makeSound();
	delete copy;
	std::cout << '\n';

	/*
	 * Woah, the cat copy lost type info!
	 *
	 * This makes sense, as every cat is an animal but not every animal is a cat,
	 * and we may only want to copy the "animal" stuff. This does mean you can't
	 * easily copy your objects if you don't know what type it was.
	 *
	 * (Unless you add a member function to copy the current object..)
	 */
}

int	main() {
	correct();
	wrong();
	extra();
}
