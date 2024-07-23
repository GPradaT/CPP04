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
	std::cout << "animal Constructor used" << std::endl;
}

Animal::~Animal()
{
	std::cout << "animal Destructor used" << std::endl;
}

std::string	Animal::getType() const
{
	return type;
}

std::string	Animal::makeSound() const
{
	return ""; 
}
