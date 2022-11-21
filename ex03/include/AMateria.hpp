/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 17:17:55 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 17:17:55 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>

class ICharacter;

class AMateria
{
	private:
		AMateria(); // Not implemented on purpose

		const std::string	_type;

	protected:
		AMateria(const AMateria &other);
		explicit AMateria(std::string const &type);


	public:
		virtual ~AMateria();
		AMateria &operator=(const AMateria &rhs); // Just like this one, type is constant

		std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif
