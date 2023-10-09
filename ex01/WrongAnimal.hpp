#ifndef WORNGANIMAL_HPP
#define WORNGANIMAL_HPP

#include<iostream>
class WrongAnimal 
{
    protected :
        std::string type;
    public :
        WrongAnimal();
        void operator =(const WrongAnimal &copy);
        WrongAnimal(const WrongAnimal &copy);
        virtual void makeSound() const;
        std :: string  getType() const;
        virtual ~WrongAnimal();
};
#endif