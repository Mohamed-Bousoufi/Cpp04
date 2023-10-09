#ifndef CAT_HPP

#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"
 class Cat : public Animal
{
    private :
            Brain * _Brain;
    public :
        Cat();
        Cat(const Cat &copy);
        void operator=(const Cat &copy);
        void makeSound() const; 
        ~Cat();
};
#endif 