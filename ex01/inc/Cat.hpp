#include "Animal.hpp"

#ifndef CAT_H
# define CAT_H

# include "Brain.hpp"

class  Cat: public Animal
{
private:
    Brain *_brain;

public:
    Cat( void );
    Cat( Cat const & cat);
    ~Cat( void );

    Cat &   operator=( Cat const & cat);

    void    makeSound() const;

};

#endif