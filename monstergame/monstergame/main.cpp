#include <iostream>


struct monster {

};


int main()
{

	enum class Monstertypen
	{
		OGRE,
		DRAGON,
		ORC,
		GIANT_SPIDER,
		SLIME,
	};

	Monstertypen Auswahl = Monstertypen::OGRE;

	if (Auswahl == Monstertypen::OGRE)
		std::cout << "Du hast Ogre ausgewaehlt!";

	return 0;
}