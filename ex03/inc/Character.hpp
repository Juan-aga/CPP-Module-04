#ifndef CHARACTER_HPP
# define CHARACTER_HPP

//# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character: public ICharacter
{
private:
    std::string _name;
    AMateria    *_inventory[SIZE];
    int         _equiped;

public:
    Character( void );
    Character( std::string const & charac );
    Character( Character const & charac );
    ~Character( void );

    Character &         operator=( Character const & cahrac );

    std::string const & getName( void ) const;
    void                equip( AMateria * matera );
    void                unequip( int idx );
    void                use( int idx, ICharacter & target);
};

#endif