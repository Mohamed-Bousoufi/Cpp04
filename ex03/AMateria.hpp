#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include<iostream>

class ICharacter; // use for circular dependency

class  AMateria
{
    protected :
        std :: string type;

    public :
         AMateria();
         AMateria(std::string const & type);
         virtual ~AMateria();
         std::string const & getType() const;

         virtual AMateria* clone() const = 0;
         virtual void use(ICharacter& target);
};
#include "ICharacter.hpp"
#endif  