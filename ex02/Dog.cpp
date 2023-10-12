#include "Dog.hpp"


Dog :: Dog() : Animal("Dog")
{
    this->_Brain = new Brain();
    std :: cout << "Dog Default Constructor Called" << std :: endl;
}

Dog :: Dog(const Dog &copy)
{
    *this = copy; 
}

Dog & Dog :: operator=(const Dog &copy)
{
    this->type = copy.type;
    if(this->_Brain)
        delete _Brain;
    _Brain = new Brain();
    *this->_Brain = *copy._Brain;
    return(*this);
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