#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria *_material[4];

public:
    MateriaSource(void);
    ~MateriaSource(void);
    MateriaSource(const MateriaSource &src);
    MateriaSource &operator=(const MateriaSource &rhs);
    void learnMateria(AMateria *);
    AMateria *createMateria(std::string const &type);
};

#endif
