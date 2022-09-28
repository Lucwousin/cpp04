/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:37:42 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:37:42 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Dog.hpp>
#include <iostream>

Dog::Dog(): Animal() {
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const Dog &other): Animal(other) {
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog() {
	std::cout << "Dog destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog &rhs) {
	Animal::operator=(rhs);
	return *this;
}

void Dog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
