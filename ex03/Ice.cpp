#include "Ice.hpp"

Ice ::Ice() : AMateria("ice") 
{
    std :: cout << "Ice Default Constructor Called"<< std :: endl;
}

Ice :: Ice(Ice &copy)
{
    *this = copy;
}

Ice & Ice :: operator = (const Ice &copy) 
{
    this->type = copy.type;
    return (*this);
}

AMateria* Ice :: clone() const
{
    return(new Ice);
}

void Ice :: use(ICharacter &target)
{
    std :: cout << "* shoots an ice bolt at " << target.getName() << " *" << std :: endl;
}

Ice :: ~Ice()
{
    std :: cout << "Ice Default Destructor Called"<< std :: endl;

}