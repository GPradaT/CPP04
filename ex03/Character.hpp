#pragma once

#include "ICharacter.hpp"
#include "AMateria.hpp"

class AMateria;

class Character : public ICharacter
{
	private:
		Character();
		std::string	_name;
		int		_max;
		AMateria	*_Materias[4];
//		AMateria	*_floor;
	public:
		Character(const std::string &name);
		Character(const Character &src);
		Character	&operator=(const Character &src);
		virtual ~Character();
		const std::string	&getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};
