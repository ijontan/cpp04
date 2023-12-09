#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
    Cat *cat = new Cat();
    Dog *dog = new Dog();

    cat->makeSound();
    dog->makeSound();
    delete cat;
    delete dog;
    return 0;
}
