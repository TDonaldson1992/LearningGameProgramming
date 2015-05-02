// Game Stats 2.0

#include <iostream>
using namespace std;

int main()
{
	typedef unsigned int uint;
	uint score = 5000;

	cout << "score: " << score << endl;

	score = score + 500;
	cout << "score: " << score << endl;

	score += 100;
	cout << "score: " << score << endl;

	int lives = 3;
	++lives;
	cout << "lives: " << lives << endl;

	lives = 3;
	lives++;
	cout << "lives: " << lives << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bouns = " << lives << ", " << bonus << endl;

	lives = 3;
	bonus = lives++ * 10;
	cout << "lives, bouns = " << lives << ", " << bonus << endl;

	score = 4294967296;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;

	system("pause");
	return 0;
}