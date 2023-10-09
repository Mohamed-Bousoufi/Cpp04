#include "Dog.hpp"

Dog :: Dog()
{
    this->type = "Dog";
    this->_Brain = new Brain();

    std :: cout << "Dog Default Constructor" << std :: endl;
}

Dog :: Dog(const Dog &copy)
{
    *this = copy; 
}

void Dog :: operator=(const Dog &copy)
{
    this->type = copy.type;
    if(this->_Brain)
        delete _Brain;
    this->_Brain = new Brain();
    if(copy._Brain)
        *_Brain = *copy._Brain;
}

Dog :: ~Dog()
{
    delete _Brain;
    std :: cout << "Dog Destructor Called "<< std :: endl;
}

void Dog::makeSound() const
{
    std :: cout << "Brak .... Brak !!!" << std :: endl;
}