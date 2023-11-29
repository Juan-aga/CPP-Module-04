#include "Animal.hpp"


Animal::Animal( void ): _type("Animal")
{
	std::cout << "Basic constructor of animal called." << std::endl;
}

Animal::Animal( Animal const & animal )
{
	std::cout << "Copy constructor of animal called. " << std::endl;
	//if (this != &animal)
	*this = animal;
}

Animal::~Animal( void )
{
	std::cout << "Destructor of animal called." << std::endl;
}

Animal &	Animal::operator=( Animal const & animal)
{
	std::cout << "Copy assignment of animal called." << std::endl;
	if (this != &animal)
	{
		this->_type = animal.getType();
	}
	return *this;
}

void		Animal::makeSound( void ) const
{
	std::cout << "Animal sounds like some another animal." << std::endl;
}

std::string	Animal::getType( void ) const
{
	return this->_type;
}
