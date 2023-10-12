#include "Character.hpp"

Character :: Character()
{
       for(int i = 0; i < 4 ; i++)
        inventory[i] = NULL;
     std :: cout << "Character Default Constructor Called" << std :: endl;
}

Character :: Character(std :: string const name)  : name(name)
{
    for(int i = 0; i < 4 ; i++)
        inventory[i] =  NULL;

     std :: cout << "Character Constructor Called" << std :: endl;
}

Character :: Character(Character & Copy)
{
    *this = Copy;
}

Character & Character :: operator=(Character &Copy)
{
        this->name = Copy.name;
    if(*this->inventory)
        for(int i = 0;i < 4;i++)
            delete inventory[i];
    for(int i = 0; i < 4; i++)
    {
        if(Copy.inventory[i])
            inventory[i] = Copy.inventory[i]->clone();
    }
    return (*this);
}

std :: string  const & Character ::  getName() const
{
    return(this->name);
}

void Character ::equip(AMateria *m)
{
    if(m && (m->getType() == "cure" || m->getType() == "ice"))
    {
        for(int i = 0;i < 4; i++)
        {
            if(inventory[i] == NULL)
            {
                inventory[i] = m->clone(); 
                break;
            }
        }
    }
}

void Character :: unequip(int indx)
{
    if(indx >= 0 && indx <=3)
    {
        this->inventory[indx] = NULL;
    }
}
 void Character :: use(int idx,ICharacter &target)
 {
    if((idx >= 0 && idx <= 3))
    {
        if(this->inventory[idx])
        {
            this->inventory[idx]->use(target);
        }
    }
 }

 Character :: ~Character()
 {
    int i = 0;
    if(*inventory != NULL)
    {
        for(i = 0; i < 4;i++)
        {
            if(inventory[i])
                delete inventory[i];
        }
    }
    std :: cout << "Character Destructor Called" << std :: endl;
 }