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
	AAnimal *arr[N];

	for (int i = 0; i < N; i++) {
		arr[i] = i & 1 ? (AAnimal *) new Dog() : (AAnimal *) new Cat();
	}
	for (int i = 0; i < N; i++) {
		arr[i]->makeSound();
	}
	for (int i = 0; i < N; i++) {
		delete arr[i];
	}
}

static void	test_deep_copy() {
	Cat	cat_1;
	for (int i = 0; i < 10; i++) {
		cat_1.getBrain().setIdea(i, "idea about food");
	}
	cat_1.getBrain().setIdea(10, "This idea is also about food");

	Cat	cat_2(cat_1);

	assert(&cat_1.getBrain() != &cat_2.getBrain() && "They should not have the same brains!");

	for (int i = 0; i < 11; i++) {
		const string	&idea1 = cat_1.getBrain().getIdea(i);
		const string	&idea2 = cat_2.getBrain().getIdea(i);

		assert(idea1 == idea2 && &idea1 != &idea2 && "The ideas should be the same, but the addresses shouldn't!");
		std::cout << cat_2.getBrain().getIdea(i) << std::endl;
	}
}

int	main() {
	aanimal_tests();
	necessary_tests();
	test_deep_copy();
	system("leaks -c animal_ex02");
}
