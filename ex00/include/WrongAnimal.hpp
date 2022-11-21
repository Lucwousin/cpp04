/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongAnimal.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:19:59 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:19:59 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>

class WrongAnimal {
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &other);
		~WrongAnimal();
		WrongAnimal &operator=(const WrongAnimal &rhs);

		std::string const	&getType() const;
		void	makeSound() const;

	protected:
		std::string	_type;
};

#endif
