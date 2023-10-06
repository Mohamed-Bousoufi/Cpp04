#include "WrongAnimal.hpp"

WrongAnimal :: WrongAnimal()
{
    type = "WrongAnimal";

    std :: cout << "WrongAnimal Costructor Called" << std :: endl;
}


void WrongAnimal :: operator=(WrongAnimal &copy)
{
    this->type = copy.type;
}

WrongAnimal :: WrongAnimal(WrongAnimal &copy)
{
    *this = copy;
}

void WrongAnimal :: makeSound() const
{
    std :: cout << "WrongAnimal Make Sound !!!" << std :: endl;
}


std :: string WrongAnimal :: getType() const
{
    return(this->type);
}

WrongAnimal :: ~WrongAnimal()
{
    std :: cout << "WrongAnimal Destructor Called" << std :: endl;
}