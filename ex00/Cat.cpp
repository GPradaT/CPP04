/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:42 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 22:29:43 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	type = "Cat";
	std::cout << "Cat constructor used." << std::endl;
}

Cat::Cat(const Cat &src) : Animal()
{
	*this = src;
}

Cat::~Cat()
{
	std::cout << "Cat destructor used" << std::endl;
}

std::string	Cat::makeSound() const
{
	return "meeow";
}

std::string	Cat::getType() const
{
	return "Cat";
}
