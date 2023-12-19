#ifndef CURE_H
#define CURE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria
{
private:
public:
    Cure(void);
    ~Cure(void);
    Cure(const Cure &src);
    Cure &operator=(const Cure &rhs);
    AMateria *clone(void) const;
    void use(ICharacter &target);
};
#endif
