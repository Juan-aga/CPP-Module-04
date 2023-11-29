#include "WrongAnimal.hpp"

#ifndef WRONG_CAT_H
# define WRONG_CAT_H

class WrongCat: public WrongAnimal
{
public:
    WrongCat( void );
    WrongCat( WrongCat const & wrongC );
    ~WrongCat( void );

    WrongCat &  operator=( WrongCat const & wrongC );

    void        makeSound( void ) const;
};

#endif