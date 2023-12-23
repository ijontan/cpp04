

#include "AMateria.hpp"

class Character : public ICharacter
{
private:
public:
    Character(void);
    ~Character(void);
    Character(const Character &src);
    Character &operator=(const Character &rhs);
    void equip(AMateria *m);
    void unequip(int idx);
    void use(int idx, ICharacter &target);
};