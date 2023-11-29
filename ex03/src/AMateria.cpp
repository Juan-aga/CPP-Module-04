#include "AMateria.hpp"

AMateria::AMateria( void )
{

}

AMateria::AMateria( std::string const & type ): type(type)
{

}

AMateria::AMateria( AMateria const & mat )
{
    if (this != &mat)
        *this = mat;
}

AMateria::~AMateria( void )
{

}
    
AMateria &  AMateria::operator=( const AMateria & mat)
{
    if (this != &mat)
        this->type = mat.getType();
    return *this;
}

std::string const & AMateria::getType( void ) const
{
    return this->type;
}