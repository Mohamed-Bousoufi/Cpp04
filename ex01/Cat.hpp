#ifndef CAT_HPP

#define CAT_HPP

#include "Animal.hpp"
 class Cat : public Animal
{
    public :
        Cat();
        Cat(const Cat &copy);
        void operator = (Cat &copy);
        void makeSound() const; 
        ~Cat();
};
#endif 