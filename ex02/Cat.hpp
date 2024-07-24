/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:45 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/24 14:39:27 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"
# include <iostream>

class	Cat: public	Animal
{
	private:
		Brain	*mind;
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		Cat	&operator=(const Cat &src);
		void	makeSound() const;
};

#endif
