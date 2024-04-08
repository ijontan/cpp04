#include "WrongCat.hpp"

/***********************************
 * Constructors
***********************************/

WrongCat::WrongCat(void)
{

}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal()
{
	(void)src;
}

WrongCat	&WrongCat::operator=(const WrongCat &rhs)
{
	(void)rhs;
	return *this;
}

/***********************************
 * Destructors
***********************************/

WrongCat::~WrongCat(void)
{

}
