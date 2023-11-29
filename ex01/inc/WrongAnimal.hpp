#ifndef WRONG_ANIMAL_H
# define WRONG_ANIMAL_H

# include <iostream>

class WrongAnimal
{
protected:
    std::string _type;

public:
    WrongAnimal( void );
    WrongAnimal( WrongAnimal const & wrongA );
    ~WrongAnimal( void );

    WrongAnimal &   operator=( WrongAnimal const & wrongA );

    void            makeSound( void ) const;
    std::string     getType( void ) const;
};

#endif