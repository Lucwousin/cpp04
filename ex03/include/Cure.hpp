/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 18:33:03 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 18:33:03 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include <AMateria.hpp>

class Cure: public AMateria {
	public:
		Cure();
		Cure(const Cure &other);
		~Cure();
		Cure &operator=(const Cure &rhs);

		Cure* clone() const;
		void use(ICharacter& target);
};

#endif