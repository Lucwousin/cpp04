/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongCat.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:37:42 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:37:42 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <WrongCat.hpp>
#include <iostream>

WrongCat::WrongCat(): WrongAnimal() {
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other): WrongAnimal(other) {
	std::cout << "WrongCat copy constructor called" << std::endl;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat &rhs) {
	WrongAnimal::operator=(rhs);
	return *this;
}

void WrongCat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}
