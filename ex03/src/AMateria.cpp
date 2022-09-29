/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 17:28:37 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 17:28:37 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <AMateria.hpp>
#include <ICharacter.hpp>
#include <iostream>

AMateria::AMateria(const AMateria &other): _type(other._type) {}

AMateria::AMateria(const std::string &type): _type(type) {}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const {
	return _type;
}

// I feel like this function should also be pure virtual?
void AMateria::use(ICharacter& target) {
	std::cout << "Abstract materia used on " << target.getName() << std::endl;
}
