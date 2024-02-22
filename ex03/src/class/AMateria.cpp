

#include "AMateria.hpp"

AMateria::AMateria(void)
{
}

AMateria::AMateria(std::string const &type) : _type(type)
{
}

AMateria::AMateria(const AMateria &src)
{
	*this = src;
}

AMateria &AMateria::operator=(const AMateria &rhs)
{
	this->_type = rhs.getType();
	return *this;
}

AMateria::~AMateria(void)
{
}

std::string const &AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
}
