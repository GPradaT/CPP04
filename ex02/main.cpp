/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:59 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/24 19:00:03 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	const Animal* j = new Dog();

	j->getType();
	j->makeSound();

	delete j;//should not create a leak

	const Animal* i = new Cat();
	
	i->getType();
	i->makeSound();
	
	
	delete i;
	return 0;
}
