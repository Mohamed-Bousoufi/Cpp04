#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
    int size = 2;
    Animal *Array[size];
    for(int index = 0; index < size/2;index++)
        Array[index] =  new Dog();
    for(int index = size/2 ; index < size;index++)
        Array[index] =  new Cat();
    for(int index = 0; index < size;index++)
        Array[index]->makeSound();
    for(int index = 0; index < size;index++)
       delete Array[index];
    std :: cout << "-------------------------" << std :: endl;
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    
    delete j;
    delete i;
    return 0;
}
