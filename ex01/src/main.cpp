#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	Animal *array[20];

	for (int i = 0; i < 10; i++)
		array[i] = new Cat();
	for (int i = 10; i < 20; i++)
		array[i] = new Dog();
	for (int i = 0; i < 20; i++)
		array[i]->makeSound();
	for (int i = 0; i < 20; i++)
		delete array[i];
	return 0;
}
