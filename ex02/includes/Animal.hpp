#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal(void);
	virtual ~Animal(void);
	Animal(const Animal &src);
	Animal &operator=(const Animal &rhs);
	virtual void makeSound(void) const = 0;
	virtual std::string getType(void) const = 0;
};

#endif
