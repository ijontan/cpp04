#ifndef CAT_H
#define CAT_H
#include "Animal.hpp"

class Cat : public Animal
{
private:
public:
	Cat(void);
	virtual ~Cat(void);
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	void makeSound(void) const;
	std::string getType(void) const;
};

#endif
