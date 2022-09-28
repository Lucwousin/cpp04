/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:37:42 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:37:42 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Cat.hpp>
#include <iostream>

Cat::Cat(): Animal() {
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const Cat &other): Animal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat &rhs) {
	Animal::operator=(rhs);
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
