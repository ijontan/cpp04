
#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
}

Cure::Cure(const Cure &src)
{
    *this = src;
}

Cure &Cure::operator=(const Cure &rhs)
{
    *this = rhs;
    return *this;
}

Cure::~Cure(void)
{
}

AMateria *Cure::clone(void) const
{
    return new Cure(*this);
}

void Cure::use(ICharacter &target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}