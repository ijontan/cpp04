#pragma once

#ifndef ICHARACTER_H
#define ICHARACTER_H

#include <iostream>
#include <string>

class AMateria;

class ICharacter
{
protected:
    AMateria *_material[4];

public:
    ICharacter(void);
    ICharacter(const ICharacter &src);
    ICharacter &operator=(const ICharacter &rhs);
    virtual ~ICharacter();
    virtual std::string const &getName() const = 0;
    virtual void equip(AMateria *m) = 0;
    virtual void unequip(int idx) = 0;
    virtual void use(int idx, ICharacter &target) = 0;
};

#endif
