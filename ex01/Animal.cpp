/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:28 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 22:29:29 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	sound = "Undefined sound";
	type = "Undefined type";
	std::cout << "animal Constructor used" << std::endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal::~Animal()
{
	std::cout << "animal Destructor used" << std::endl;
}

Animal	&Animal::operator=(const Animal &src)
{
	this->type = src.getType();
	return *this;
}

std::string	Animal::getType() const
{
	return type;
}

void	Animal::makeSound() const
{
	std::cout << sound << std::endl; 
}
