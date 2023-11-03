#include "Animal.hpp"
//#include <iostream>


Animal::Animal( void ): _type("Animal")
{
	std::cout << "Basic constructor of " << this->_type << " called." << std::endl;
}

Animal::Animal( Animal const & animal )
{
	std::cout << "Copy constructor of " << this->_type << " called. " << std::endl;
	*this = animal;
}

Animal::~Animal( void )
{
	std::cout << "Destructor of " << this->_type << " called." << std::endl;
}

Animal &	Animal::operator=( Animal const & animal)
{
	std::cout << "Copy assignment of " << this->_type << " called." << std::endl;
	if (this != &animal)
	{
		this->_type = animal.getType();
	}
	return *this;
}

void		Animal::makeSound( void ) const
{
	std::string	sound;

	sound = "";
	if (this->_type == "Animal")
		sound = "some another animal.";
	else if (this->_type == "Dog")
		sound = "\"bark\"";
	else if (this->_type == " Cat")
		sound = "\"miauuuuu\"";

	std::cout << this->_type << " sounds like " << sound << std::endl;
}

std::string	Animal::getType( void ) const
{
	return this->_type;
}
