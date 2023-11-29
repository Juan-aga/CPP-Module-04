#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog( void ): Animal()
{
    std::cout << "Basic constructor of Dog called." << std::endl;
    this->_type = "Dog";
}

Dog::Dog( Dog const & Dog ): Animal()
{
    //if (this != &Dog)
    std::cout << "Copy constructor of Dog called. " << std::endl;
    this->_type = Dog.getType();
}

Dog::~Dog( void )
{
    std::cout << "Destructor of Dog called." << std::endl;

}

Dog &   Dog::operator=( Dog const & Dog )
{
    std::cout << "Copy assignment of Dog called." << std::endl;
	if (this != &Dog)
	{
		this->_type = Dog.getType();
	}
	return *this;
}

void    Dog::makeSound( void ) const
{
    std::cout << "Dog make woooof." << std::endl;
}