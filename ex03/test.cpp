#include "AMateria.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Fire.hpp"
#include "Water.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	MateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Fire());
	src->learnMateria(new Water());

	Character* me = new Character("GPrada");
	AMateria* tmp;
	ICharacter* you = new Character("You");
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("water");
	me->equip(tmp);

	me->use(0, *you); // Should use ice
	me->use(1, *you); // Should use cure
	me->use(2, *you); // Should use fire
	me->use(3, *you); // Should use water

	delete me;
	delete you;
	delete src;

	return 0;
}
