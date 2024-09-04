/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:35 by gprada-t          #+#    #+#             */
/*   Updated: 2024/09/04 18:28:04 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Ice : public AMateria
{
	private:
		Ice(const Ice &src);
		void		operator=(const Ice &src);

	public:
		Ice();
		virtual		~Ice();
		
		AMateria	*clone() const;
		void		use(ICharacter &target);
};

