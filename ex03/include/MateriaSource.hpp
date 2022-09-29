/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 18:48:18 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 18:48:18 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <IMateriaSource.hpp>

# define TEMPLATE_COUNT	4

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &other);
		~MateriaSource();
		MateriaSource &operator=(const MateriaSource &rhs);

		void learnMateria(AMateria*);
		AMateria *createMateria(std::string const & type);

	private:
		AMateria *_templates[TEMPLATE_COUNT];
};

#endif