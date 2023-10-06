#ifndef WRONGCAT_HPP

#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
 class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        WrongCat(WrongCat &copy);
        void operator = (WrongCat &copy);
        void makeSound() const; 
        ~WrongCat();
};
#endif 