#include "WrongCat.hpp"
WrongCat :: WrongCat()
{
    this->type = "WrongCat";

    std :: cout << "WrongCat Constructor Called" << std :: endl;
}

WrongCat :: WrongCat( WrongCat &copy)
{
    *this = copy;
}

void WrongCat :: operator=(const WrongCat &copy)
{
    this->type = copy.getType();
}

WrongCat :: ~WrongCat()
{
    std :: cout << "WrongCat Destructor Called" << std :: endl;
}

void WrongCat :: makeSound() const
{
    std :: cout << "WrongMeow....WrongMeow !!!!" << std :: endl;
} 