#pragma once

#include "IMateriaSource.hpp"

class	MateriaSource : public	IMateriaSource
{
	private:
		int		_Max;
		AMateria	*_Materias[4];
	public:
		MateriaSource();
		~MateriaSource();
		void	learnMateria(AMateria *m);
		AMateria	*createMateria(const std::string &type);
};
