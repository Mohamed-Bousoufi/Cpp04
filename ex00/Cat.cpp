#include "Cat.hpp"
Cat :: Cat()
{
    this->type = "Cat";

    std :: cout << "Cat Constructor Called" << std :: endl;
}

Cat :: Cat(Cat &copy)
{
    *this = copy;
}

void Cat :: operator=(Cat &copy)
{
    this->type = copy.getType();
}

Cat :: ~Cat()
{
    std :: cout << "Cat Destructor Called" << std :: endl;
}

void Cat :: makeSound() const
{
    std :: cout << "Meow....Meow !!!!" << std :: endl;
} 