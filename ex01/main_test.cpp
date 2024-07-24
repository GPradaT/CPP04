/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:59 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/24 13:17:25 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int	main()
{
	Animal	*animals;

	animals = new Animal[100];

	for (int i = 0; i < 100; ++i)
	{
		if (i < 50)
			animals[i] = Cat();
		else
			animals[i] = Dog();
	}
	delete [] animals;
	return 0;
}
