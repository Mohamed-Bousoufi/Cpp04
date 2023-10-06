#include "Dog.hpp"

Dog :: Dog()
{
    this->type = "Dog";

    std :: cout << "Dog Default Constructor" << std :: endl;
}

Dog :: Dog(Dog &copy)
{
    *this = copy; 
}

void Dog :: operator=(const Dog &copy)
{
    this->type = copy.type;
}

Dog :: ~Dog()
{
    std :: cout << "Dog Destructor Called "<< std :: endl;
}

void Dog::makeSound() const
{
    std :: cout << "Brak .... Brak !!!" << std :: endl;
}