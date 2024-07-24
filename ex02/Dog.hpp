/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:51 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/24 14:39:45 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

# include <iostream>

class	Dog : public	Animal
{
	private:
		Brain	*mind;
	public:
		Dog();
		Dog(const Dog &src);
		~Dog();
		Dog	&operator=(const Dog &src);
		void	makeSound() const;
};

#endif
