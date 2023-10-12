#include "MateriaSource.hpp"

MateriaSource :: MateriaSource()
{
    for(int i = 0;i < 4;i++)
        Materias[i] = NULL;
     std :: cout << "MateriaSource Default Construtor" << std :: endl;
}

MateriaSource :: MateriaSource( MateriaSource const &copy)
{
    *this = copy;
}

MateriaSource & MateriaSource:: operator=( MateriaSource const &copy)
{
    if(*this->Materias)
        for(int i = 0;i < 4;i++)
            delete Materias[i];
    for(int i = 0; i < 4; i++)
    {
        if(copy.Materias[i])
            Materias[i] = copy.Materias[i]->clone();
    }
    return (*this);
}

void MateriaSource :: learnMateria(AMateria * m)
{
        for(int i = 0;i < 4;i++)
        {
            if(Materias[i] == NULL)
            {
                Materias[i] = m; 
                break;
            }
        }
}

AMateria * MateriaSource :: createMateria(std :: string const & type)
{
    if(this->Materias[0])
    {
        for(int i = 0; i < 4; i++)
        {
            if( this->Materias[i] && this->Materias[i]->getType() == type)
            {   
                return (this->Materias[i]);
            }
        }
    }
    return(0);
}

MateriaSource :: ~MateriaSource()
{
        int i = 0;
    if(*Materias != NULL)
    {
        while(Materias[i])
        {
            delete Materias[i];
            i++;
        }
    }
    std :: cout << " MateriaSource Destructor Called" << std :: endl;
}