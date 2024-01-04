#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
}

IMateriaSource::IMateriaSource(const IMateriaSource &src)
{
    *this = src;
}

IMateriaSource &IMateriaSource::operator=(const IMateriaSource &rhs)
{
    *this = rhs;
    return *this;
}
