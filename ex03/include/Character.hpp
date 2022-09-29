/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 17:44:02 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 17:44:02 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <ICharacter.hpp>

# define INV_SIZE	4

class Character: public ICharacter {
	private:
		Character(); // Not implemented, needs name!

		const std::string&	_name;
		AMateria			*_inv[INV_SIZE];

	public:
		Character(const std::string &name);
		Character(const Character &other);
		~Character();
		Character& operator=(const Character &rhs);

		std::string const &getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif