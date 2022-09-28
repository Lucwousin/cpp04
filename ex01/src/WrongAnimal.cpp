/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:22:41 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:22:41 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <WrongAnimal.hpp>
#include <iostream>

WrongAnimal::WrongAnimal(): _type("wrong animal") {
	std::cout << "WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): _type(other._type) {
	std::cout << "WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs) {
	if (this != &rhs) {
		_type = rhs._type;
	}
	return *this;
}

string const	&WrongAnimal::getType() const {
	return _type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "<insert generic wrong animal sound>" << std::endl;
}


