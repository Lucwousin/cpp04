/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 19:42:01 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 19:42:01 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <Brain.hpp>
#include <iostream>

Brain::Brain() {
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain &other) {
	std::cout << "Brain copy constructor called" << std::endl;

	for (int i = 0; i < 100; i++) {
		_ideas[i] = other._ideas[i];
	}
}

Brain::~Brain() {
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator=(const Brain &rhs) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			_ideas[i] = rhs._ideas[i];
		}
	}
	return *this;
}

const std::string	&Brain::getIdea(int i) const {
	if (i < 0 || i > 99) {
		std::cerr << "getIdea: Invalid index" << std::endl;
		exit(-1);
	}
	return _ideas[i];
}

void	Brain::setIdea(int i, const std::string &str) {
	if (i < 0 || i > 99) {
		std::cerr << "setIdea: Invalid index" << std::endl;
		exit(-1);
	}
	_ideas[i] = str;
}