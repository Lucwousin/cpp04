/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 18:33:38 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 18:33:38 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Ice.hpp>
#include <ICharacter.hpp>
#include <iostream>

Ice::Ice(): AMateria("ice") {
	std::cout << "Ice default constructor called" << std::endl;
}

Ice::Ice(const Ice &other): AMateria(other.getType()) {
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice::~Ice() {
	std::cout << "Ice destructor called" << std::endl;
}

Ice& Ice::operator=(const Ice &rhs) {
	std::cout << "Ice assignment operator called" << std::endl;

	(void) rhs;
	return *this;
}

Ice *Ice::clone() const {
	return new Ice();
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
