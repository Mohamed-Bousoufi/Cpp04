#include "Cat.hpp"
Cat :: Cat() : Animal("Cat")
{
    this->_Brain = new Brain();
    std :: cout << "Cat Default Constructor Called" << std :: endl;
}

Cat :: Cat(const Cat &copy)
{
    *this = copy;
}

Cat & Cat :: operator=(const Cat &copy)
{
    this->type = copy.getType();
    if(this->_Brain)
        delete _Brain;
    _Brain = new Brain();
    *this->_Brain = *copy._Brain;
    return(*this);
}

Cat :: ~Cat()
{
    delete _Brain;
    std :: cout << "Cat Destructor Called" << std :: endl;
}

void Cat :: makeSound() const
{
    std :: cout << "Meow....Meow !!!!" << std :: endl;
} 