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

Cure::Cure(): AMateria("cure") {}

Cure::Cure(const Cure &other): AMateria(other.getType()) {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure &rhs) {
	(void) rhs;
	return *this;
}

Cure *Cure::clone() const {
	return new Cure();
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
