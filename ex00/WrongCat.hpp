/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:51 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 22:29:51 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

# include <string>
# include <iostream>

class	WrongCat : public	WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		~WrongCat();
		WrongCat	&operator=(const WrongCat &src);
};

#endif
