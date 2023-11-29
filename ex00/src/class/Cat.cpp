#include "Cat.hpp"

Cat::Cat(void)
{
}

Cat::Cat(const Cat &src)
{
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
    return *this;
}

Cat::~Cat(void)
{
}