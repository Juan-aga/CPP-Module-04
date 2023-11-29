#ifndef ICE_H
# define ICE_H

# include "AMateria.hpp"

class Ice: public AMateria
{
public:
    Ice( void );
    Ice( Ice const & ice );
    ~Ice();

    Ice &       operator=( Ice const & ice );

    void        use( ICharacter & target );
    AMateria *  clone( void ) const;
};

#endif