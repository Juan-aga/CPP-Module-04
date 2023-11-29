#include "Character.hpp"

Character::Character( void )
{

}

Character::Character( std::string const & charac ): _name(charac), _equiped(0)
{
    for (int i = 0; i < SIZE; i++)
        this->_inventory[i] = NULL;
}

Character::Character( Character const & charac ): _name(charac.getName()), _equiped(0)
{
    for (int i = 0; i < SIZE; i++)
    {
        if (i < charac._equiped)
            this->equip(charac._inventory[i]->clone());
        else
            this->_inventory[i] = NULL;
    }
}

Character::~Character( void )
{
    for (int i = 0; i < SIZE; i++)
        delete this->_inventory[i];
}

Character &         Character::operator=( const Character & charac )
{
    if (this != &charac)
    {
        this->_name = charac.getName();
        for (int i = 0; i < SIZE; i++)
        {
            delete this->_inventory[i];
            if (i < charac._equiped)
                this->equip(charac._inventory[i]->clone());
            else
                this->_inventory[i] = NULL;
        }
    }
    return *this;
}

std::string const & Character::getName( void ) const
{
    return this->_name;
}

void                Character::equip( AMateria * materia)
{
    if (this->_equiped >= SIZE)
    {
        if (DEBUG)
            std::cout << "Can't equip, inventory is full.\n";
        return;
    }
    if (materia == NULL)
    {
        if (DEBUG)
            std::cout << "Can't equip, materia is null.\n";
        return;
    }
    this->_inventory[this->_equiped] = materia;
    this->_equiped++;
}

void                Character::unequip( int idx )
{
    if (idx < 0 || this->_equiped <= idx)
    {
        if (DEBUG)
            std::cout << "Can't unequip, index out of range.\n";
        return;
    }
    for (int i = idx; i < SIZE - 1; i++)
    {
        this->_inventory[i] = this->_inventory[i + 1];
        this->_inventory[i + 1] = NULL;
    }
    this->_equiped--;
}

void                Character::use( int idx, ICharacter & target)
{
    // if (idx < 0 || idx >= SIZE || this->_inventory[idx] == NULL)
    //     return;
    if (idx < 0 || idx >= SIZE )
    {
        if (DEBUG)
            std::cout << "Bad index." << std::endl;
    }
    else if (this->_inventory[idx] == NULL)
    {
        if (DEBUG)
            std::cout << "There's no materia equiped in the index." << std::endl;
    }
    else
        this->_inventory[idx]->use(target);
}