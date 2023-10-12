#ifndef CURE_HPP

#define CURE_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
class Cure : public AMateria
{
    public :
        Cure();
        Cure(Cure &Copy);
        Cure  & operator =(const Cure &Copy);
        ~Cure();

        AMateria * clone() const;
        void use(ICharacter& target);
};
#endif