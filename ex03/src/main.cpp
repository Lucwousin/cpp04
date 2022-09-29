/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: lsinke <lsinke@student.codam.nl>             +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/09/29 19:01:27 by lsinke        #+#    #+#                 */
/*   Updated: 2022/09/29 19:01:27 by lsinke        ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <MateriaSource.hpp>
#include <Ice.hpp>
#include <Cure.hpp>
#include <Character.hpp>

#include <iostream>

static void	provided_tests() {
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

	std::cout << "End of provided tests" << std::endl;
}

static void	tests_i_guess() {
	// AMateria	matter; // (does not work, abstract!)
	// ICharacter character; // (does not work, also abstract!)

	Character	npc1("npc 1");
	Character	npc2("npc 2");

	// We can use these as ICharacters if we really wanted to (no reason tho)
	{
		ICharacter *p1 = &npc1;
		ICharacter *p2 = &npc2;
		std::cout << p1->getName() << " - " << p2->getName() << std::endl;
	}

	// They obviously don't have anything in their inventories!
	for (int i = -1; i < INV_SIZE + 1; i++) {
		npc1.unequip(i);
		npc2.unequip(i);
	}

	// They also can't hold too many...
	{
		AMateria *tmp;

		for (int i = 0; i < 5; i++) {
			tmp = new Ice();
			npc1.equip(tmp);
		}
		delete tmp; // no leeks!
	}

	// Now they should both have the same __type__ of materias, not the actual same
	// If they actually were the same, we would double free on destruction!
	npc2 = npc1;
	// Same counts for this one
	Character npc3(npc1);

	//If you want a leak; uncomment this... I don't see why we shouldn't also delete them when unequipping but ok
	//for (int i = 0; i < INV_SIZE; i++)
	//	npc3.unequip(i);

	// Everything will of course be destroyed here
}

int main() {
	provided_tests();
	tests_i_guess();

	system("leaks -q materia_ex03");
}