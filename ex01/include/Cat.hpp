/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 18:37:11 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 18:37:11 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <Animal.hpp>

class Cat: public Animal {
	public:
		Cat();
		Cat(const Cat &other);
		~Cat();
		Cat &operator=(const Cat &rhs);

		virtual void	makeSound() const;
};

#endif
