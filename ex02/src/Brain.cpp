#include "Brain.hpp"

Brain::Brain( void )
{
    std::cout << "Basic constructor of Brain called." << std::endl;
    for (int i=0; i < 100; i++)
        this->_ideas[i] = "";
}

Brain::Brain( Brain const & brain )
{
    std::cout << "Copy constructor of Brain called." << std::endl;
    *this = brain;
}

Brain::~Brain( void )
{
    std::cout << "Destructor of Brain called." << std::endl;
}

Brain & Brain::operator=( Brain const & brain)
{
    std::cout << "Copy assignment of Brain called." << std::endl;
    if (this != &brain)
    {
        for (int i=0; i < 100; i++)
            this->_ideas[i] = brain._ideas[i];
    }
    return *this;
}