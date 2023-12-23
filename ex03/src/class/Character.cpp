
#include "Character.hpp"

Character::Character(void) : ICharacter()
{
}

Character::Character(const Character &src)
{
    *this = src;
}

Character &Character::operator=(const Character &rhs)
{
    *this = rhs;
    return *this;
}

Character::~Character(void)
{
}

void Character::equip(AMateria *m)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (_material[i] == NULL)
        {
            _material[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx > 3)
        return;
    _material[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
    if (idx < 0 || idx > 3)
        return;
    _material[idx]->use(target);
}