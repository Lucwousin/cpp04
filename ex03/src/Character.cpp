/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 18:09:36 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 18:09:36 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Character.hpp>
#include <iostream>

Character::Character(const std::string &name): _name(name), _inv() {}

Character::Character(const Character &other): _name(other._name), _inv() {
	for (int i = 0; i < INV_SIZE; i++) {
		if (other._inv[i] != nullptr)
			_inv[i] = other._inv[i]->clone();
	}
}

Character::~Character() {
	for (int i = 0; i < INV_SIZE; i++) {
		delete _inv[i];
	}
}

Character &Character::operator=(const Character &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < INV_SIZE; i++) {
			delete _inv[i];
			_inv[i] = rhs._inv[i]->clone();
		}
	}
	return *this;
}

std::string const &Character::getName() const {
	return _name;
}

void Character::equip(AMateria *m) {
	for (int i = 0; i < INV_SIZE; i++) {
		if (_inv[i] == nullptr) {
			_inv[i] = m;
			return;
		}
	}
	std::cout << _name << "'s inventory is full!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= INV_SIZE) {
		std::cout << "Invalid inventory index! Use a value between 0 and " << INV_SIZE << std::endl;
		return;
	}
	if (_inv[idx] == nullptr) {
		std::cout << _name << " did not have a materia in slot " << idx << "!" << std::endl;
		return;
	}
	_inv[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx >= INV_SIZE) {
		std::cout << "Invalid inventory index! Use a value between 0 and " << INV_SIZE << std::endl;
		return;
	}
	if (_inv[idx] == nullptr) {
		std::cout << _name << " did not have a materia in slot " << idx << "!" << std::endl;
		return;
	}
	_inv[idx]->use(target);
}
