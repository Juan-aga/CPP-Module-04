#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal()
{
    std::cout << "Basic constructor of WrongCat called." << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat( WrongCat const & wrongC ): WrongAnimal()
{
    std::cout << "Copy constructor of WrongCat called." << std::endl;
    this->_type = wrongC.getType();
}

WrongCat::~WrongCat( void )
{
    std::cout << "Destructor of WrongCat called." << std::endl;
}

WrongCat &  WrongCat::operator=( WrongCat const & wrongC )
{
    std::cout << "Copy assignment of WrongCat called." << std::endl;
    if (this != &wrongC)
    {
        this->_type = wrongC.getType();
    }
    return *this;
}

void        WrongCat::makeSound( void ) const
{
    WrongAnimal::makeSound();
}