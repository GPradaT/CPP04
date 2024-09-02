/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:28 by gprada-t          #+#    #+#             */
/*   Updated: 2024/09/02 10:20:10 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	_type = "Undefined _type";
	std::cout << "animal Constructor used" << std::endl;
}

AMateria::AMateria(const std::string &type) : _type(type) {}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria::~AMateria()
{
	std::cout << "animal Destructor used" << std::endl;
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
//	std::cout << sound << std::endl; 
}
