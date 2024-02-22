#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
	*this = src;
}

Dog &Dog::operator=(const Dog &rhs)
{
	(void)rhs;
	return *this;
}

Dog::~Dog(void)
{
	delete brain;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}

std::string Dog::getType(void) const
{
	return type;
}
