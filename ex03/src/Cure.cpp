#include "Cure.hpp"

Cure::Cure( void )
{
    this->type = "cure";
}

Cure::Cure( Cure const & cure ): AMateria()
{
    if (this != &cure)
        this->type = cure.getType();
}

Cure::~Cure( void )
{

}

Cure &  Cure::operator=( Cure const & cure)
{
    if (this != &cure)
        this->type = cure.getType();
    return *this;
}

void    Cure::use( ICharacter & target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *  Cure::clone( void ) const
{
    return new Cure();
}