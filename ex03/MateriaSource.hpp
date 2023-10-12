#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
class MateriaSource : public IMateriaSource
{
    protected :
    AMateria * Materias[4];

    public:
    MateriaSource();
    MateriaSource(MateriaSource const & copy);
    MateriaSource & operator=(MateriaSource const &copy);
    void learnMateria(AMateria*);
     AMateria* createMateria(std::string const & type);
    ~MateriaSource();
};


#endif