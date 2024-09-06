#include "Water.hpp"
#include <iostream>

Water::Water() : AMateria("water") {}

Water::Water(const Water& other) : AMateria(other) {}

Water& Water::operator=(const Water& other) {
	if (this != &other) {
		AMateria::operator=(other);
	}
	return *this;
}

Water::~Water() {}

AMateria* Water::clone() const {
	return new Water(*this);
}

void Water::use(ICharacter& target) {
	std::cout << "* splashes water at " << target.getName() << " *" << std::endl;
}
