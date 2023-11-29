#include "Ice.hpp"

Ice::Ice( void )
{
    this->type = "ice";
}

Ice::Ice( Ice const & ice ): AMateria()
{
    if (this != &ice)
        this->type = ice.getType();
}

Ice::~Ice( void )
{

}

Ice &  Ice::operator=( Ice const & ice)
{
    if (this != &ice)
        this->type = ice.getType();
    return *this;
}

void    Ice::use( ICharacter & target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

AMateria *  Ice::clone( void ) const
{
    return new Ice();
}