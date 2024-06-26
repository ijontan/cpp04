#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"
#include <string>

class Cat : public Animal
{
private:
	Brain *brain;

public:
	Cat(void);
	virtual ~Cat(void);
	Cat(const Cat &src);
	Cat &operator=(const Cat &rhs);
	void makeSound(void) const;
	std::string getType(void) const;
	void inspired(std::string inspiration);
};

#endif
