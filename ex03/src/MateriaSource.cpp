#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ): _learned(0)
{
    for (int i = 0; i < SIZE; i++)
        this->_knowed[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & matS ): _learned(0)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (i < matS._learned)
            this->learnMateria(matS._knowed[i]->clone());
        else
            this->_knowed[i] = NULL;
    }
}

MateriaSource::~MateriaSource( void )
{
    for (int i = 0; i < SIZE; i++)
        delete this->_knowed[i];
}

MateriaSource &     MateriaSource::operator=( const MateriaSource & matS )
{
    if (this != &matS)
    {
        for (int i = 0; i < SIZE; i++)
        {
            delete this->_knowed[i];
            if (i < this->_learned)
                this->learnMateria(matS._knowed[i]->clone());
            else
                this->_knowed[i] = NULL;
        }
    }
    return *this;
}

void                MateriaSource::learnMateria( AMateria * matS )
{
    if (this->_learned >= SIZE)
    {
        delete matS;
        return;
    }
    this->_knowed[this->_learned] = matS;
    this->_learned++;
}

AMateria *          MateriaSource::createMateria( std::string const & type )
{
    for (int i = 0; i < this->_learned; i++)
    {
        if (this->_knowed[i]->getType() == type)
            return this->_knowed[i]->clone();
    }
    return 0;

}