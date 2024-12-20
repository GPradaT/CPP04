#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_Max = 0;
	for (int i = 0; i < 4; ++i)
		_Materias[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; ++i)
		if (_Materias[i] != NULL)
			delete _Materias[i];
}

void	MateriaSource::learnMateria(AMateria *m)
{
	if (m)
	{
		if (_Max < 4)
		{
			_Materias[_Max] = m;
			std::cout << "Value _Max: " << _Max << std::endl;
			std::cout << "Type _Materia[_Max]: " << m->getType() << std::endl;
			++_Max;
		}
	}
	
}

AMateria	*MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; _Materias[i] != NULL; ++i)
	{
		std::cout << "Type _Materias[i]: " << _Materias[i]->getType() << std::endl;
		if (_Materias[i]->getType() == type)
			return _Materias[i];
	}
	return 0;
}
