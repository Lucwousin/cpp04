/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   WrongDog.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:37:11 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:37:11 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

# include <WrongAnimal.hpp>

class WrongDog: public WrongAnimal {
	public:
		WrongDog();
		WrongDog(const WrongDog &other);
		~WrongDog();
		WrongDog &operator=(const WrongDog &rhs);

		void	makeSound() const;
};

#endif
