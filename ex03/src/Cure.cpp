/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 18:33:38 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 18:33:38 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Cure.hpp>
#include <ICharacter.hpp>
#include <iostream>

Cure::Cure(): AMateria("cure") {
	std::cout << "Cure default constructor called" << std::endl;
}

Cure::Cure(const Cure &other): AMateria(other.getType()) {
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure::~Cure() {
	std::cout << "Cure destructor called" << std::endl;
}

Cure& Cure::operator=(const Cure &rhs) {
	std::cout << "Cure assignment operator called" << std::endl;
	(void) rhs;
	return *this;
}

Cure *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
