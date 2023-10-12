#include "Brain.hpp"

Brain :: Brain()
{
    std :: cout << "Brain Default Constructor" << std :: endl;
}

Brain :: Brain(Brain &copy)
{
    *this = copy;
}

Brain & Brain :: operator=(const Brain &copy)
{
    *(this->ideas) = *(copy.ideas);
    return(*this);
}


Brain :: ~Brain()
{
    std :: cout << "Brain Destructor" << std :: endl;
}