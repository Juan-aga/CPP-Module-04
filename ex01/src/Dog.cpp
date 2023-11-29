#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog( void ): Animal()
{
    std::cout << "Basic constructor of Dog called." << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
    if (DEBUG)
        std::cout << "Dog constructor new brain address: " << this->_brain << std::endl;
}

Dog::Dog( Dog const & Dog ): Animal()
{
    //if (this != &Dog)
    std::cout << "Copy constructor of Dog called. " << std::endl;
    this->_type = Dog.getType();
    this->_brain = new Brain(*Dog._brain);
    if (DEBUG)
    {
        std::cout << "Copy brain add: " << Dog._brain << " to add: ";
        std::cout << this->_brain << std::endl;
    }
}

Dog::~Dog( void )
{
    std::cout << "Destructor of Dog called." << std::endl;
    delete this->_brain;
}

Dog &   Dog::operator=( Dog const & Dog )
{
    std::cout << "Copy assignment of Dog called." << std::endl;
	if (this != &Dog)
	{
		this->_type = Dog.getType();
        this->_brain = new Brain(*Dog._brain);
        if (DEBUG)
        {
            std::cout << "Copy brain add: " << Dog._brain << " to add: ";
            std::cout << this->_brain << std::endl;
        }
	}
	return *this;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Dog make woooof." << std::endl;
}