/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:48 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/24 14:38:33 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor used" << std::endl;
	type = "Dog";
	sound = "WOOF WOOF";
	mind = new Brain();
}

Dog::Dog(const Dog &src) : Animal()
{
	*this = src;
}

Dog	&Dog::operator=(const Dog &src)
{
	this->type = src.getType();
	this->sound = src.sound;
	return *this;
}

Dog::~Dog()
{
	delete mind;
	std::cout << "Dog destructor used" << std::endl;
}

void	Dog::makeSound() const 
{
	std::cout << sound << std::endl;
}
