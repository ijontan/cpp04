#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
private:
public:
    Dog(void);
    virtual ~Dog(void);
    Dog(const Dog &src);
    Dog &operator=(const Dog &rhs);
    void makeSound(void) const;
};

#endif
