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

# include <AAnimal.hpp>
# include <Brain.hpp>

class Dog: public AAnimal {
	public:
		Dog();
		Dog(const Dog &other);
		~Dog();
		Dog &operator=(const Dog &rhs);

		virtual void	makeSound() const;

	private:
		Brain	*_brain;
};

#endif
