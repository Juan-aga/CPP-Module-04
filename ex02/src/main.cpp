#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include <iostream>

#define SIZE 10

int main( void )
{
	{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak

	delete i;
	}
	{
	const Animal* array[SIZE];

	for (int i = 0; i < SIZE / 2 ; i++)
		array[i] = new Dog();

	for (int i = SIZE / 2; i < SIZE; i ++)
		array[i] = new Cat();

	for (int i = 0; i < SIZE; i++)
	{
		std::cout << "Animal " << i << " type: "<< array[i]->getType() << std::endl;
		array[i]->makeSound();
	}

	for (int i = 0; i < SIZE; i++)
		delete array[i];
	}
	{
	const Cat*	cat1;
	const Cat*	cat2;

	cat1 = new Cat();
	cat2 = new Cat(*cat1);

	delete cat1;
	delete cat2;
	}
	// Test, can't instantiate 
	//Animal dog;

	return 0;
}
