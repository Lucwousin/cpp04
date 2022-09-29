/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AAnimal.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:22:41 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:22:41 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <AAnimal.hpp>
#include <iostream>

AAnimal::AAnimal(): _type("AAnimal") {
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &other): _type(other._type) {
	std::cout << "AAnimal copy constructor called" << std::endl;
}

AAnimal::~AAnimal() {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

string const	&AAnimal::getType() const {
	return _type;
}
