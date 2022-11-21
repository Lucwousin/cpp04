/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:22:41 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:22:41 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Animal.hpp>
#include <iostream>

Animal::Animal(): _type("animal") {
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other): _type(other._type) {
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

std::string const	&Animal::getType() const {
	return _type;
}

void	Animal::makeSound() const {
	std::cout << "<insert generic animal sound>" << std::endl;
}


