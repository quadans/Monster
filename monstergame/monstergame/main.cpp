#include <iostream>
#include <string>

enum Monsterarten {
	OGRE,
	DRAGON,
	ORC,
	GIANT_SPIDER,
	SLIME,
};

struct Werte
{
	Monsterarten typ;
	std::string Name;
	int HP;
};

std::string getMonstertypeString(Werte werte)
{
	if (werte.typ == Monsterarten::OGRE)
	{
		return "Ogre";
	}
	if (werte.typ == Monsterarten::DRAGON)
	{
		return "Drache";
	}
	if (werte.typ == Monsterarten::ORC)
	{
		return "Orc";
	}
	if (werte.typ == Monsterarten::GIANT_SPIDER)
	{
		return "Spider";
	}
	if (werte.typ == Monsterarten::SLIME)
	{
		return "Slime";
	}

	return "Unbekannt";
}

void printMonster(Werte werte)
{
	std::cout << "Das Monster " << getMonstertypeString(werte) << " heisst " << werte.Name << " und hat "
		<< werte.HP << " HP.";
}

int main()
{
	Werte ogre{ Monsterarten::OGRE, "Peon", 145 };
	Werte slime{ Monsterarten::SLIME, "Slimey", 23 };

	printMonster(ogre);
	printMonster(slime);

	return 0;
}