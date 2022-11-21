/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/28 19:36:18 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/28 19:36:18 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>

class Brain {
	public:
		Brain();
		Brain(const Brain &other);
		~Brain();
		Brain &operator=(const Brain &rhs);

		const std::string	&getIdea(int i) const;
		void	setIdea(int i, const std::string &str);

	private:
		std::string	_ideas[100];
};

#endif //BRAIN_HPP
