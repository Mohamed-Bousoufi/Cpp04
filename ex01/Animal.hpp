#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include<iostream>
class Animal 
{
    protected :
        std::string type;
    public :
        Animal();
        void operator =(const Animal &copy);
        Animal(const Animal &copy);
        virtual void makeSound() const;
        std :: string  getType() const;
        virtual ~Animal();
};
#endif