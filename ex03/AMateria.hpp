/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:35 by gprada-t          #+#    #+#             */
/*   Updated: 2024/09/05 15:48:05 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ICharacter.hpp"
# include <string>
# include <iostream>

class	ICharacter;

class	AMateria
{
	protected:
		std::string	_type;
	
	public:
		AMateria();
		AMateria(const std::string &type);
		AMateria(const AMateria &src);
		AMateria		&operator=(const AMateria &src);
		virtual		~AMateria();
		
		const std::string	&getType() const;
		
		virtual AMateria	*clone() const = 0;
		virtual void		use(ICharacter &target) = 0;
};

