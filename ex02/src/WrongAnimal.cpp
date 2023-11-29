#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ): _type("WrongAnimal")
{
    std::cout << "Basic constructor of WrongAnimal called." << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const & wrongA)
{
    std::cout << "Copy constructor of WrongAnimal called." << std::endl;
    *this = wrongA;
}

WrongAnimal::~WrongAnimal( void )
{
     std::cout << "Destructor of WrongAnimal called." << std::endl;
}

WrongAnimal &   WrongAnimal::operator=( WrongAnimal const & wrongA)
{
    std::cout << "Copy assignment of WrongAnimal called." << std::endl;
    if (this != &wrongA)
    {
        this->_type = wrongA._type;
    }
    return *this;
}

void            WrongAnimal::makeSound( void ) const
{
	std::cout << "WrongAnimal sounds like some another WrongAnimal." << std::endl;
}

std::string     WrongAnimal::getType( void ) const
{
    return this->_type;
}