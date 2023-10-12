#include "Dog.hpp"

Dog :: Dog() : Animal("Dog")
{

    std :: cout << "Dog Default Constructor Called" << std :: endl;
}

Dog :: Dog(const Dog &copy)
{
    *this = copy; 
}

Dog & Dog :: operator=(const Dog &copy)
{
    this->type = copy.type;
    return(*this);
}

Dog :: ~Dog()
{
    std :: cout << "Dog Destructor Called "<< std :: endl;
}

void Dog::makeSound() const
{
    std :: cout << "Brak .... Brak !!!" << std :: endl;
}