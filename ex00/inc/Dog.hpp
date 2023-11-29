#include "Animal.hpp"

#ifndef DOG_H
# define DOG_H

class  Dog: public Animal
{
public:
    Dog( void );
    Dog( Dog const & Dog);
    ~Dog( void );

    Dog &   operator=( Dog const & Dog);

    void    makeSound() const;

};

#endif