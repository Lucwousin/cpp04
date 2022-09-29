/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 18:33:03 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 18:33:03 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include <AMateria.hpp>

class Ice: public AMateria {
	public:
		Ice();
		Ice(const Ice &other);
		~Ice();
		Ice &operator=(const Ice &rhs);

		Ice* clone() const;
		void use(ICharacter& target);
};

#endif