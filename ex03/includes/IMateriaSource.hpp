#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include "AMateria.hpp"

class IMateriaSource
{
private:
public:
    IMateriaSource(void);
    IMateriaSource(const IMateriaSource &src);
    IMateriaSource &operator=(const IMateriaSource &rhs);
    virtual ~IMateriaSource() {}
    virtual void learnMateria(AMateria *) = 0;
    virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
