
#include "Animal.hpp"

Animal::Animal(void)
{
}

Animal::Animal(const Animal &src)
{
    *this = src;
}

Animal &Animal::operator=(const Animal &rhs)
{
    return *this;
}

Animal::~Animal(void)
{
}