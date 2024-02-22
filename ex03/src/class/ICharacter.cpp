#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
	for (size_t i = 0; i < 4; i++)
		_material[i] = NULL;
}

ICharacter::ICharacter(const ICharacter &src)
{
	*this = src;
}

ICharacter &ICharacter::operator=(const ICharacter &rhs)
{
	(void)rhs;
	return *this;
}

ICharacter::~ICharacter(void)
{
}
