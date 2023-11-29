#ifndef MATERIASOURCE_H
# define MATERIASOURCE_H

# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
    AMateria    *_knowed[SIZE];
    int         _learned;
public:
    MateriaSource( void );
    MateriaSource( MateriaSource const & matS );
    ~MateriaSource( void );

    MateriaSource & operator=( MateriaSource const & matS );

    void            learnMateria( AMateria * );
    AMateria *      createMateria( std::string const & type );
};

#endif