#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <ostream>

Cat::Cat(void) : Animal()
{
	type = "Cat";
	brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
	brain = new Brain();
	std::cout << "hello from the other side" << std::endl;
	// *this->brain = *src.brain;
	*this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
	if (this == &rhs)
		return *this;
	*this->brain = *rhs.brain;
	return *this;
}

Cat::~Cat(void)
{
	delete brain;
}

void Cat::makeSound(void) const
{
	// std::cout << brain->getIdea() << std::endl;
	std::cout << "Meow" << std::endl;
	// std::cout << brain << std::endl;
}

std::string Cat::getType(void) const
{
	return type;
}

void Cat::inspired(std::string inspiration)
{
	brain->newIdea(inspiration);
}
