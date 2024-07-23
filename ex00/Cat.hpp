/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:45 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 22:29:45 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

# include <string>
# include <iostream>

class	Cat: public	Animal
{
	public:
		Cat();
		Cat(const Cat &src);
		~Cat();
		std::string	makeSound() const;
		std::string	getType() const;
};

#endif
