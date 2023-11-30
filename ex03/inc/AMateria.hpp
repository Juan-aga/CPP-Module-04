#ifndef AMATERIA_H
# define AMATERIA_H

# include <iostream>
# include <string>
# include "ICharacter.hpp"

# define SIZE 4

class ICharacter;

class AMateria
{
protected:
    std::string type;
public:
    AMateria( void );
    AMateria( std::string const & type );
    AMateria( AMateria const & mat );
    virtual ~AMateria( void );

    AMateria &          operator=( AMateria const & mat );
    std::string const & getType( void ) const;

    virtual AMateria*   clone( void ) const = 0;
    virtual void        use( ICharacter & target ) = 0;
};

#endif
