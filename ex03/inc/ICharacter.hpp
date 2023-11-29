#ifndef ICHARACTER_H
# define ICHARACTER_HH

#include <string>

class AMateria;

class ICharacter
{
public:
    virtual                     ~ICharacter( void ) {}
    virtual std::string const & getName( void ) const = 0;
    virtual void                equip( AMateria * m ) = 0;
    virtual void                unequip( int idx ) = 0;
    virtual void                use( int idx, ICharacter & target ) = 0;
};

#endif