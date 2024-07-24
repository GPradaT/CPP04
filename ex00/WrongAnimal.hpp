/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:35 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 22:29:35 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <string>
# include <iostream>

class	WrongAnimal
{
	protected:
		std::string	type;
		std::string	sound;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &src);
		virtual		~WrongAnimal();
		WrongAnimal		&operator=(const WrongAnimal &src);
		std::string	getType() const;
		void		makeSound() const;
};

#endif
