#include "Animal.hpp"

Animal::Animal(void)
{
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal &Animal::operator=(const Animal &rhs)
{
	if (this != &rhs)
		type = rhs.getType();
	return *this;
}

Animal::~Animal(void)
{
}

void Animal::makeSound(void) const
{
}

std::string Animal::getType(void) const
{
	return "Animal";
}
