#include "Fire.hpp"
#include <iostream>

Fire::Fire() : AMateria("fire") {}

Fire::Fire(const Fire& other) : AMateria(other) {}

Fire& Fire::operator=(const Fire& other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

Fire::~Fire() {}

AMateria* Fire::clone() const {
	return new Fire(*this);
}

void Fire::use(ICharacter& target) {
	std::cout << "* shoots a fireball at " << target.getName() << " *" << std::endl;
}
