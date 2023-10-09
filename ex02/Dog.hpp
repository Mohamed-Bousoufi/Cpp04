#ifndef DOG_HPP

#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{

    private :
            Brain * _Brain;
    public :
        Dog();
        Dog(const Dog &copy);
        void operator=(const Dog &copy);
        ~Dog();

    void makeSound() const;
};


#endif