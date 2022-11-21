/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 18:52:46 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 18:52:46 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>
#include <iostream>

MateriaSource::MateriaSource(): _templates() {
	std::cout << "MateriaSource default constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &other): _templates() {
	std::cout << "MateriaSource copy constructor called" << std::endl;

	for (int i = 0; i < TEMPLATE_COUNT; i++) {
		if (other._templates[i] != NULL)
			_templates[i] = other._templates[i]->clone();
	}
}

MateriaSource::~MateriaSource() {
	std::cout << "MateriaSource destructor called" << std::endl;

	for (int i = 0; i < TEMPLATE_COUNT; i++) {
		delete _templates[i];
	}
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs) {
	std::cout << "MateriaSource assignment operator called" << std::endl;

	if (this != &rhs) {
		for (int i = 0; i < TEMPLATE_COUNT; i++) {
			delete _templates[i];
			_templates[i] = rhs._templates[i];
		}
	}
	return *this;
}

void MateriaSource::learnMateria(AMateria *type) {
	for (int i = 0; i < TEMPLATE_COUNT; i++) {
		if (_templates[i] == NULL) {
			_templates[i] = type;
			return;
		}
	}
	std::cout << "All template slots are full!" << std::endl;
}

AMateria *MateriaSource::createMateria(const std::string &type) {
	for (int i = 0; i < TEMPLATE_COUNT; i++) {
		if (_templates[i] != NULL && _templates[i]->getType() == type) {
			return _templates[i]->clone();
		}
	}
	return NULL;
}
