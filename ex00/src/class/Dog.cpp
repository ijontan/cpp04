#include "Dog.hpp"

Dog::Dog(void)
{
}

Dog::Dog(const Dog &src)
{
    *this = src;
}

Dog &Dog::operator=(const Dog &rhs)
{
    return *this;
}

Dog::~Dog(void)
{
}