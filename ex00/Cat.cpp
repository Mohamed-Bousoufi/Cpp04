#include "Cat.hpp"
Cat :: Cat() : Animal("Cat")
{

    std :: cout << "Cat Default Constructor Called" << std :: endl;
}

Cat :: Cat(const Cat &copy)
{
    *this = copy;
}

Cat & Cat :: operator=(const Cat &copy)
{
    this->type = copy.getType();
    return(*this);
}

Cat :: ~Cat()
{
    std :: cout << "Cat Destructor Called" << std :: endl;
}

void Cat :: makeSound() const
{
    std :: cout << "Meow....Meow !!!!" << std :: endl;
} 