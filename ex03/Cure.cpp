/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:28 by gprada-t          #+#    #+#             */
/*   Updated: 2024/09/02 10:35:06 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : _type("Cure") {}

Cure::Cure(const Cure &src) {(void)src;}

Cure::~Cure()
{
	std::cout << "Cure Destructor used" << std::endl;
}

void	Cure::operator=(const Cure &src)
{
	(void)src;
}

const std::string	&Cure::getType() const
{
	return _type;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria	*Cure::clone()
{
	return new Cure();
}
