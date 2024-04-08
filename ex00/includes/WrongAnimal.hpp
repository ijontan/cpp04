#ifndef WRONG_ANIMAL
#define WRONG_ANIMAL
class WrongAnimal {
public:
	WrongAnimal(void);
	~WrongAnimal(void);
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal	&operator=(const WrongAnimal &rhs);
	void makeSound() const;

private:
	
};

#endif
