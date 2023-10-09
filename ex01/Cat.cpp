#include "Cat.hpp"
Cat :: Cat()
{
    this->type = "Cat";
    this->_Brain = new Brain();

    std :: cout << "Cat Constructor Called" << std :: endl;
}

Cat :: Cat(const Cat &copy)
{
    *this = copy;
}

 void Cat :: operator=(const Cat &copy)
{
        this->type = copy.type;
    if(this->_Brain)
        delete _Brain;
    this->_Brain = new Brain();
    if(copy._Brain)
        *_Brain = *copy._Brain;
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