#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource()
{
    for (size_t i = 0; i < 4; i++)
        _material[i] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource &src) : IMateriaSource()
{
    *this = src;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &rhs)
{
    *this = rhs;
    return *this;
}

MateriaSource::~MateriaSource(void)
{
    for (size_t i = 0; i < 4; i++)
        if (_material[i] != NULL)
            delete _material[i];
}

void MateriaSource::learnMateria(AMateria *m)
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

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (size_t i = 0; i < 4; i++)
        if (_material[i] != NULL && _material[i]->getType() == type)
            return _material[i]->clone();
    return NULL;
}