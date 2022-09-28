/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongDog.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:37:42 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:37:42 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <WrongDog.hpp>
#include <iostream>

WrongDog::WrongDog(): WrongAnimal() {
	std::cout << "WrongDog default constructor called" << std::endl;
	_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &other): WrongAnimal(other) {
	std::cout << "WrongDog copy constructor called" << std::endl;
}

WrongDog::~WrongDog() {
	std::cout << "WrongDog destructor called" << std::endl;
}

WrongDog&	WrongDog::operator=(const WrongDog &rhs) {
	WrongAnimal::operator=(rhs);
	return *this;
}

void WrongDog::makeSound() const {
	std::cout << "Woof!" << std::endl;
}
