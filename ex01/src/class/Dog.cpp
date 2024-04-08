#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog(void) : Animal()
{
	type = "Dog";
	brain = new Brain();
}

Dog::Dog(const Dog &src) : Animal(src)
{
	brain = new Brain();
	*this = src;
}

Dog &Dog::operator=(const Dog &rhs)
{
	if (this == &rhs)
		return *this;
	*this->brain = *rhs.brain;
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
