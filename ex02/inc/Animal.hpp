#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
protected:
	std::string	_type;


public:
	virtual ~Animal( void );
	Animal( void );
	Animal( Animal const & animal );

	Animal &	operator=( Animal const & animal );

	virtual void		makeSound( void ) const = 0;
	std::string	getType( void ) const;
};

#endif
