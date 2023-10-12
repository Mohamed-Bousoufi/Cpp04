#include "Animal.hpp"

Animal :: Animal() : type ("Animal")
{
    std :: cout << "Animal Default Costructor Called" << std :: endl;
}
Animal :: Animal(const std :: string type) : type(type)
{

    std :: cout << "Animal  Costructor Called" << std :: endl;
}

Animal &Animal :: operator=(const Animal &copy)
{
    this->type = copy.type;

    return(*this);
}

Animal :: Animal(const Animal &copy)
{
    *this = copy;
}

void Animal :: makeSound() const
{
    std :: cout << "Animal Make Sound !!!" << std :: endl;
}


std :: string Animal :: getType() const
{
    return(this->type);
}

Animal :: ~Animal()
{
    std :: cout << "Animal Destructor Called" << std :: endl;
}