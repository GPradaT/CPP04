/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:28 by gprada-t          #+#    #+#             */
/*   Updated: 2024/09/04 19:29:23 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("Ice") {}

Ice::Ice(const Ice &src) {(void)src;}

Ice::~Ice()
{
	std::cout << "Ice Destructor used" << std::endl;
}

void	Ice::operator=(const Ice &src)
{
	(void)src;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "holaa" << std::endl;
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria	*Ice::clone() const
{
	return new Ice();
}
