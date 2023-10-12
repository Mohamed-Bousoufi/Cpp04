#include "AMateria.hpp"
AMateria :: AMateria()
{

    std :: cout << "AMateria Default Constructor Called" << std :: endl;
}


AMateria ::AMateria(std::string const & type) : type(type)
{
    std :: cout << "AMateria Constructor Called" << std :: endl;
}

std :: string const & AMateria :: getType() const
{
        return(this->type);
}
void AMateria :: use(ICharacter &target)
{
    std :: cout << "* a pure Materia use"<< target.getName() << std :: endl;
}

AMateria :: ~AMateria()
{
    
    std :: cout << "AMateria Default Destructor Called" << std :: endl;
}