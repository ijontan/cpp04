#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string _type;

public:
    AMateria(void);
    AMateria(std::string const &type);
    ~AMateria(void);
    AMateria(const AMateria &src);
    AMateria &operator=(const AMateria &rhs);
    std::string const &getType() const; // Returns the materia type
    virtual AMateria *clone() const = 0;
    virtual void use(ICharacter &target);
};

#endif
