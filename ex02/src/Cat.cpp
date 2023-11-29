#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat( void ): Animal()
{
    std::cout << "Basic constructor of cat called." << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
    if (DEBUG)
        std::cout << "Cat constructor new brain address: " << this->_brain << std::endl;

}

Cat::Cat( Cat const & cat ): Animal()
{
    //if (this != &cat)
    std::cout << "Copy constructor of cat called. " << std::endl;
    this->_type = cat.getType();
    this->_brain = new Brain(*cat._brain);
    if (DEBUG)
    {
        std::cout << "Copy brain add: " << cat._brain << " to add: ";
        std::cout << this->_brain << std::endl;
    }
}

Cat::~Cat( void )
{
    std::cout << "Destructor of cat called." << std::endl;
    delete this->_brain;
}

Cat &   Cat::operator=( Cat const & cat )
{
    std::cout << "Copy assignment of cat called." << std::endl;
	if (this != &cat)
	{
		this->_type = cat.getType();
        this->_brain = new Brain(*cat._brain);
        if (DEBUG)
        {
            std::cout << "Copy brain add: " << cat._brain << " to add: ";
            std::cout << this->_brain << std::endl;
        }
	}
	return *this;
}

void    Cat::makeSound( void ) const
{
    std::cout << "Cat make meooow." << std::endl;
}