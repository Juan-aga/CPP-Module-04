#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>



int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	// meta = i;	
	// meta->makeSound();

	delete meta;
	delete j;
	delete i;

	const WrongAnimal*	wa = new WrongAnimal();
	const WrongCat*		wc = new WrongCat();

	wa->makeSound();
	wc->makeSound();

	delete wa;
	delete wc;
	return 0;
}
