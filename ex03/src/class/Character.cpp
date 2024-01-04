
#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : ICharacter()
{
}

Character::Character(const Character &src) : ICharacter()
{
    *this = src;
}

Character::Character(std::string name) : ICharacter()
{
    _name = name;
}

Character &Character::operator=(const Character &rhs)
{
    *this = rhs;
    return *this;
}

Character::~Character(void)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (_material[i] != NULL)
            delete _material[i];
    }
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

std::string const &Character::getName() const
{
    return _name;
}