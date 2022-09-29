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

Cat::Cat(): AAnimal() {
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const Cat &other): AAnimal(other) {
	std::cout << "Cat copy constructor called" << std::endl;
	_brain = new Brain(*other._brain);
}

Cat::~Cat() {
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat&	Cat::operator=(const Cat &rhs) {
	if (this != &rhs) {
		AAnimal::operator=(rhs);
		*_brain = *rhs._brain;
	}
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meow!" << std::endl;
}

Brain	&Cat::getBrain() const {
	return *_brain;
}
