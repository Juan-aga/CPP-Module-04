#include "Animal.hpp"

#ifndef DOG_H
# define DOG_H

# include "Brain.hpp"

class  Dog: public Animal
{
private:
    Brain   *_brain;
    
public:
    Dog( void );
    Dog( Dog const & Dog);
    ~Dog( void );

    Dog &   operator=( Dog const & Dog);

    void    makeSound() const;

};

#endif