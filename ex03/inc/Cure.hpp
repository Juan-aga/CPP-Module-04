#ifndef CURE_H
# define CURE_H

//# include "ICharacter.hpp"
# include "AMateria.hpp"

class Cure: public AMateria
{

public:
    Cure( void );
    Cure( Cure const & cure );
    ~Cure( void );

    Cure &      operator=( Cure const & cure );

    void        use( ICharacter & target );
    AMateria *  clone( void ) const;
};

#endif