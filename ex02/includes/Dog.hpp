#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	Brain *brain;

public:
	Dog(void);
	virtual ~Dog(void);
	Dog(const Dog &src);
	Dog &operator=(const Dog &rhs);
	void makeSound(void) const;
	std::string getType(void) const;
};

#endif
