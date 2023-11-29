#include "Animal.hpp"

#ifndef CAT_H
# define CAT_H

class  Cat: public Animal
{
public:
    Cat( void );
    Cat( Cat const & cat);
    ~Cat( void );

    Cat &   operator=( Cat const & cat);

    void    makeSound() const;

};

#endif