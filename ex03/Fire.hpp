#ifndef FIRE_HPP
#define FIRE_HPP

#include "AMateria.hpp"

class Fire : public AMateria {
public:
	Fire();
	Fire(const Fire& other);
	Fire& operator=(const Fire& other);
	virtual ~Fire();

	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
