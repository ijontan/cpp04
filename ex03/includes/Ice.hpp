#ifndef ICE_H
#define ICE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Ice : public AMateria
{
private:
public:
    Ice(void);
    ~Ice(void);
    Ice(const Ice &src);
    Ice &operator=(const Ice &rhs);
    AMateria *clone(void) const;
    void use(ICharacter &target);
};
#endif
