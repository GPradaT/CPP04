/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:48 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 22:29:48 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	type = "WrongCat (Dog)";
	sound = "WOOF WOOF";
	std::cout << "Dog constructor used" << std::endl;
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal()
{
	*this = src;
}

WrongCat	&WrongCat::operator=(const WrongCat &src)
{
	this->type = src.getType();
	this->sound = src.sound;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << type << " destructor used" << std::endl;
}
