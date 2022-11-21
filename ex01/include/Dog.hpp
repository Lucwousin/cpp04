/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Dog.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:37:11 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:37:11 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <Animal.hpp>
# include <Brain.hpp>

class Dog: public Animal {
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog &operator=(const Dog &rhs);

		virtual void	makeSound() const;
		Brain			&getBrain() const;

	private:
		Brain	*_brain;
};

#endif
