/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Animal.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:19:59 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:19:59 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal {
	public:
		Animal();
		Animal(const Animal &other);
		virtual ~Animal();
		Animal &operator=(const Animal &rhs);

		std::string const	&getType() const;
		virtual void		makeSound() const;

	protected:
		std::string	_type;
};

#endif //ANIMAL_HPP
