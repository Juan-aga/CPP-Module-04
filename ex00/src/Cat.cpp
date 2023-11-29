#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat( void ): Animal()
{
    std::cout << "Basic constructor of cat called." << std::endl;
    this->_type = "Cat";
}

Cat::Cat( Cat const & cat ): Animal()
{
    //if (this != &cat)
    std::cout << "Copy constructor of cat called. " << std::endl;
    this->_type = cat.getType();
}

Cat::~Cat( void )
{
    std::cout << "Destructor of cat called." << std::endl;

}

Cat &   Cat::operator=( Cat const & cat )
{
    std::cout << "Copy assignment of cat called." << std::endl;
	if (this != &cat)
	{
		this->_type = cat.getType();
	}
	return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Cat make meooow." << std::endl;
}