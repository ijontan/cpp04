#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat : public Animal
{
private:
public:
    Cat(void);
    ~Cat(void);
    Cat(const Cat &src);
    Cat &operator=(const Cat &rhs);
};

#endif
