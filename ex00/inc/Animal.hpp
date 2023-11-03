#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal
{
protected:
	std::string	_type;

public:
	Animal( void );
	Animal( Animal const & animal );
	~Animal( void );

	Animal &	operator=( Animal const & animal );

	void		makeSound( void ) const;
	std::string	getType( void ) const;
};

#endif
