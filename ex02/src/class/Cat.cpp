#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
    type = "Cat";
    brain = new Brain();
}

Cat::Cat(const Cat &src) : Animal(src)
{
    *this = src;
}

Cat &Cat::operator=(const Cat &rhs)
{
    (void)rhs;
    return *this;
}

Cat::~Cat(void)
{
    delete brain;
}

void Cat::makeSound(void) const
{
    std::cout << "Meow" << std::endl;
}

std::string Cat::getType(void) const
{
    return type;
}