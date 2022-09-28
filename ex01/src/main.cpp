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

static void	necessary_tests() {
	Animal *arr[N];

	for (int i = 0; i < N; i++) {
		arr[i] = i & 1 ? (Animal *) new Dog() : (Animal *) new Cat();
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
	for (int i = 0; i < 11; i++) {
		std::cout << cat_2.getBrain().getIdea(i) << std::endl;
	}
}

int	main() {
	necessary_tests();
	test_deep_copy();
	system("leaks -c animal_ex01");
}
