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
#include <iostream>

#define N	8

static void	aanimal_tests() {
	// AAnimal	animal; -> this doesn't work! :(

}

static void	necessary_tests() {
	std::cout << "Necessary tests!\n\n";
	std::cout << "Creating " << N << " animals." << '\n';
	AAnimal *arr[N];

	for (int i = 0; i < N; i++) {
		arr[i] = i & 1 ? (AAnimal *) new Dog() : (AAnimal *) new Cat();
	}
	std::cout << "\nAnimals created, make them make sound!\n";
	for (int i = 0; i < N; i++) {
		arr[i]->makeSound();
	}
	std::cout << "\nSound made! Time to delete all those pesky critters\n";
	for (int i = 0; i < N; i++) {
		delete arr[i];
	}
	std::cout << "Necessary tests done" << "\n\n";
}

static void	test_deep_copy() {
	std::cout << "Testing deep copy\n";
	Cat	cat_1;
	for (int i = 0; i < 10; i++) {
		cat_1.getBrain().setIdea(i, "idea about food");
	}
	cat_1.getBrain().setIdea(10, "This idea is also about food");

	std::cout << "Cat_1 is now initialized and has 11 ideas in its' brain\n";
	Cat	cat_2(cat_1);
	std::cout << "Cat_2 is now copied from cat_1, all ideas are the same and we can change the ideas for cat_0\n";
	for (int i = 0; i < 11; i++) {
		cat_1.getBrain().setIdea(i, "This idea is not about food anymore");
	}

	for (int i = 0; i < 11; i++) {
		std::cout << "cat_1 idea " << i << " " << cat_1.getBrain().getIdea(i) << std::endl;
		std::cout << "cat_2 idea " << i << " " << cat_2.getBrain().getIdea(i) << std::endl;
	}
}

int	main() {
	aanimal_tests();
	necessary_tests();
	test_deep_copy();
	system("leaks -c animal_ex02");
}
