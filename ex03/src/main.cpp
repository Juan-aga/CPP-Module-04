#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    {
        IMateriaSource* src = new MateriaSource();
        src->learnMateria(new Ice());
        src->learnMateria(new Cure());
        ICharacter* me = new Character("me");
        AMateria* tmp;
        tmp = src->createMateria("ice");
        me->equip(tmp);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(1, *bob);
        delete bob;
        delete me;
        delete src;
    }
    std::cout << "\n\n\n";
    {
        IMateriaSource* src = new MateriaSource();
        AMateria* tmp;
        src->learnMateria(new Cure());
        tmp = src->createMateria("ice");
        ICharacter* me = new Character("me");
        me->equip(tmp);
        ICharacter* bob = new Character("bob");
        me->use(0, *bob);
        me->use(5, *bob);
        tmp = src->createMateria("cure");
        me->equip(tmp);
        me->use(0, *bob);
        me->unequip(5);
        delete bob;
        delete me;
        delete src;
    }
    return 0;
}