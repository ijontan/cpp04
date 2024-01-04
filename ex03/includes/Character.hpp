
#ifndef CHARACTER_H
#define CHARACTER_H

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
    std::string _name;

public:
    Character(void);
    ~Character(void);
    Character(std::string name);
    Character(const Character &src);
    Character &operator=(const Character &rhs);
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
    std::string const &getName() const;
};

#endif