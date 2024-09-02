#pragma once

#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		Character();
		int		_max;
		AMateria	_Materias[4];
		std::string	_name;
	public:
		Character(const std::string &name);
		Character(const Character &src);
		Character	&operator=(const Character &src);
		virtual ~Character() {}
		virtual std::string const & getName() const;
		virtual void equip(AMateria* m);
		virtual void unequip(int idx);
		virtual void use(int idx, ICharacter& target);
};
