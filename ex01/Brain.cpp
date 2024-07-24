/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:42 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/24 12:12:56 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "🧠 CONSTRUCTOR" << std::endl;
}

Brain::~Brain()
{
	std::cout << "🧠 DESTRUCTOR" << std::endl;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain	&Brain::operator=(const Brain &src)
{
	for (int i = 0; i < 100; ++i)
		this->ideas[i] = src.ideas[i];
	return *this;
}
