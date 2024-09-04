/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:28 by gprada-t          #+#    #+#             */
/*   Updated: 2024/09/04 19:29:30 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "Undefined _type";
}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::~AMateria()
{
}
AMateria	&AMateria::operator=(const AMateria &src)
{
	this->_type = src.getType();
	return *this;
}

const std::string	&AMateria::getType() const
{
	return _type;
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
//	std::cout << sound << std::endl; 
}
