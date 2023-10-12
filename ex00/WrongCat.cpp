#include "WrongCat.hpp"
WrongCat :: WrongCat() : WrongAnimal("WrongCat")
{

    std :: cout << "WrongCat Constructor Called" << std :: endl;
}

WrongCat :: WrongCat( WrongCat &copy)
{
    *this = copy;
}

WrongCat & WrongCat :: operator=(const WrongCat &copy)
{
    this->type = copy.getType();
    return(*this);
}

WrongCat :: ~WrongCat()
{
    std :: cout << "WrongCat Destructor Called" << std :: endl;
}

void WrongCat :: makeSound() const
{
    std :: cout << "WrongMeow....WrongMeow !!!!" << std :: endl;
} 