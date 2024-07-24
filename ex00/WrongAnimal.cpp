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

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	sound = "Undefined sound";
	type = "Undefined type";
	std::cout << "WrongAnimal Constructor used" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor used" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &src)
{
	this->type = src.getType();
	return *this;
}

std::string	WrongAnimal::getType() const
{
	return type;
}

void	WrongAnimal::makeSound() const
{
	std::cout << sound << std::endl; 
}
