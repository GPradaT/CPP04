#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
/*	std::cout << "HOla11 xDD" << std::endl;
	AMateria *a = new Ice();
	std::cout << "HOla22 xDD" << std::endl;
	ICharacter *natos = new Character("Natos");
	std::cout << "HOla33 xDD" << std::endl;
	std::cout << natos->getName();
	natos->equip(a);
	natos->use(0, *natos);
	delete natos;
*/	
	IMateriaSource* src = new MateriaSource();

	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;

	tmp = src->createMateria("ice");
	std::cout << tmp->getType() << std::endl;
	me->equip(tmp);
	tmp = src->createMateria("cure");
	std::cout << tmp->getType() << std::endl;
	me->equip(tmp);
	me->unequip(0);
	me->equip(tmp);

	std::cout << "HOlak 44 xDD" << std::endl;
	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
//	delete me;
//	delete src;
	
	return 0;
}
