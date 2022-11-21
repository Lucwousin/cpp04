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

class AAnimal {
	public:
		AAnimal();
		AAnimal(const AAnimal &other);
		virtual ~AAnimal();
		AAnimal &operator=(const AAnimal &rhs);

		std::string const	&getType() const;
		virtual void	makeSound() const = 0;

	protected:
		std::string	_type;
};

#endif //ANIMAL_HPP
