/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gprada-t <gprada-t@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 22:29:59 by gprada-t          #+#    #+#             */
/*   Updated: 2024/07/23 22:30:34 by gprada-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal*	meta = new Animal();
	const Animal*	dog = new Dog();
	const Animal*	cat = new Cat();

	Dog copyDog = Dog();
	Cat copyCat = Cat();
	Animal copyMeta = Animal();

	Dog copyConstructorDog = Dog(copyDog);
	Cat copyConstructorCat = Cat(copyCat);
	Animal copyConstructorMeta = Animal(copyMeta);

	std::cout << "DOGS SOUNDS:" << std::endl;
	dog->makeSound();
	copyDog.makeSound();
	copyConstructorDog.makeSound();	
	std::cout << dog->getType() << " " << std::endl;

	std::cout << "CATS SOUNDS:" << std::endl;
	cat->makeSound();
	copyCat.makeSound();
	copyConstructorCat.makeSound();	
	std::cout << cat->getType() << " " << std::endl;

	std::cout << "UNDEFINED ANIMAL SOUNDS:" << std::endl;
	meta->makeSound();
	copyMeta.makeSound();
	copyConstructorMeta.makeSound();	
	std::cout << meta->getType() << " " << std::endl;
	meta->makeSound();

	WrongCat notCat;
	WrongAnimal wrongMeta;
	WrongCat copyWrongCat = WrongCat(notCat);
	WrongCat copyWrongConstructorCat = WrongCat(copyWrongCat);
	WrongAnimal copyWrongMeta = WrongAnimal();
	WrongAnimal copyWrongConstructorMeta = WrongAnimal(copyWrongMeta);
	std::cout << "WRONG CATS SOUNDS:" << std::endl;
	notCat.makeSound();
	copyWrongCat.makeSound();
	copyWrongConstructorCat.makeSound();	
	std::cout << notCat.getType() << " " << std::endl;

	std::cout << "UNDEFINED ANIMAL SOUNDS:" << std::endl;
	wrongMeta.makeSound();
	copyWrongMeta.makeSound();
	copyWrongConstructorMeta.makeSound();	
	std::cout << wrongMeta.getType() << " " << std::endl;
	wrongMeta.makeSound();
	std::cout << "DESTRUCTORS:" << std::endl;
	delete dog;
	delete cat;
	delete meta;

	return 0;
}
