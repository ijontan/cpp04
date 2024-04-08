#include "WrongAnimal.hpp"
#include <iostream>
#include <ostream>

/***********************************
 * Constructors
 ***********************************/

WrongAnimal::WrongAnimal(void)
{
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	(void)src;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	(void)rhs;
	return *this;
}

void WrongAnimal::makeSound() const
{
	std::cout << "hahaha" << std::endl;
}

/***********************************
 * Destructors
 ***********************************/

WrongAnimal::~WrongAnimal(void)
{
}
