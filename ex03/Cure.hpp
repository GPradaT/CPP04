/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:35 by gprada-t          #+#    #+#             */
/*   Updated: 2024/09/02 10:23:55 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "AMateria.hpp"

class	Cure : public AMateria
{
	private:
		Cure(const Cure &src);
		Cure		&operator=(const Cure &src);

	public:
		Cure();
		virtual		~Cure();
		
		virtual AMateria	*clone();
		virtual void		use(ICharacter &target);
};

