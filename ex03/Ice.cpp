/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:28 by gprada-t          #+#    #+#             */
/*   Updated: 2024/09/02 10:29:15 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : _type("Ice") {}

Ice::Ice(const Ice &src) {(void)src;}

Ice::~Ice()
{
	std::cout << "Ice Destructor used" << std::endl;
}

void	Ice::operator=(const Ice &src)
{
	(void)src;
}

const std::string	&Ice::getType() const
{
	return _type;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << "*" << std::endl;
}

AMateria	*Ice::clone()
{
	return new Ice();
}
