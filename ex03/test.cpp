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

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("fire");
	me->equip(tmp);
	tmp = src->createMateria("water");
	me->equip(tmp);

	me->use(0, *me); // Should use ice
	me->use(1, *me); // Should use cure
	me->use(2, *me); // Should use fire
	me->use(3, *me); // Should use water

	delete me;
	delete src;

	return 0;
}
