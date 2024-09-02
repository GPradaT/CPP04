#include "Character.hpp"

Character::Character() : _name(""), _max(0) {}

Character::Character(const std::string &name) : _name(name), _max(0) {}

Character	&Character::operator=(const Character &src)
{
	_name = src._name;
	_max = src._max;
	if (_max > 0)
	{
		for (int i = 0; i < _max; ++i)
			_Materias[i] = src._Materias[i];
	}
	return *this;
}

Character::Character(const Character &src) {*this = src;}

void		&Character::getName() const
{
	return _name;
}

void		Character::equip(AMateria *m)
{
	if (m)
	{
		if (_max < 3)
			_Materias[++_max] = m;
	}

}

void		Character::use(int idx, ICharacter &target)
{
	if (idx <= _max)
	{

	}
}

