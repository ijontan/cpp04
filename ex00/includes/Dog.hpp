#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
private:
public:
    Dog(void);
    ~Dog(void);
    Dog(const Dog &src);
    Dog &operator=(const Dog &rhs);
};

#endif
