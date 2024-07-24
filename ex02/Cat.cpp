/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:42 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/24 14:39:08 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor used." << std::endl;
	type = "Cat";
	sound = "MEEOOOW";
	mind = new Brain();
}

Cat::Cat(const Cat &src) : Animal()
{
	*this = src;
}

Cat::~Cat()
{
	delete mind;
	std::cout << "Cat destructor used" << std::endl;
}

Cat	&Cat::operator=(const Cat &src)
{
	this->type = src.getType();
	this->sound = src.sound;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << sound << std::endl;
}
