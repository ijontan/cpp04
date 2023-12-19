#include "ICharacter.hpp"

ICharacter::ICharacter(void)
{
}

ICharacter::ICharacter(const ICharacter &src)
{
    *this = src;
}

ICharacter &ICharacter::operator=(const ICharacter &rhs)
{
    return *this;
}

ICharacter::~ICharacter(void)
{
}