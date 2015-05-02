#include <iostream>
using namespace std;

int main()
{
	const int ALIEN_POINTS = 150;
	int aliensKilled = 10;
	int score = aliensKilled * ALIEN_POINTS;
	cout << "Score: " << score << endl;

	enum difficulty {
		NOVICE,
		EASY,
		NORMAL,
		HARD,
		UNBEATABLE
	};

	difficulty myDifficulty = EASY;

	enum shipCost {
		FIGHTER_COST = 25,
		BOMBER_COST,
		CRUISER_COST = 50
	};

	shipCost myShipCost = BOMBER_COST;
	cout << "\nTo upgrade my ship to a Cruiser, it will cost "
		<< (CRUISER_COST - myShipCost) << " Resource Points.\n";

	system("pause");
	return 0;
}