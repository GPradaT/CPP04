#ifndef WATER_HPP
#define WATER_HPP

#include "AMateria.hpp"

class Water : public AMateria {
public:
	Water();
	Water(const Water& other);
	Water& operator=(const Water& other);
	virtual ~Water();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
