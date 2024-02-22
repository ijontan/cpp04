
#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{
}

Ice::Ice(const Ice &src) : AMateria("ice")
{
	*this = src;
}

Ice &Ice::operator=(const Ice &rhs)
{
	(void)rhs;
	return *this;
}

Ice::~Ice(void)
{
}

AMateria *Ice::clone(void) const
{
	return new Ice(*this);
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"
			  << std::endl;
}
