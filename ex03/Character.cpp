#include "Character.hpp"

Character::Character() : _name(""), _max(0) {}

Character::Character(const std::string &name)
{
	_name = name;
	_max = 0;
	_floorMax = 0;
	for (int i = 0; i < 4; ++i)
		_Materias[i] = NULL, _floor[i] = NULL;
	std::cout << "tekagas" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_floor[i] != NULL)
			delete _floor[i];
		if (_Materias[i] != NULL)
			delete _Materias[i];
	}
}

Character	&Character::operator=(const Character &src)
{
	_name = src._name;
	_max = src._max;
	for (int i = 0; i < _max; ++i)
		_Materias[i] = src._Materias[i];
	return *this;
}

Character::Character(const Character &src) {*this = src;}

const std::string	&Character::getName() const
{
	return _name;
}

void		Character::equip(AMateria *m)
{
	if (_max < 4)
	{
		if (_Materias[_max] != m)
		{
			_Materias[_max] = m->clone();
			_max++;
		}
	}
}

void		Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4 && _Materias[idx] != NULL)
	{
		_floor[_floorMax] = _Materias[idx];
		_floorMax++;
	}
	_Materias[idx] = NULL;
}

void		Character::use(int idx, ICharacter &target)
{
	if (_Materias[idx] != NULL)
		_Materias[idx]->use(target);
}

