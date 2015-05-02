// Game Stats

#include <iostream>
using namespace std;

int main() 
{
	int score;
	double distance;
	char playAgain;
	bool shieldsUp;

	short lives, aliensKilled;

	score = 0;
	distance = 1200.76;
	playAgain = 'y';
	shieldsUp = true;
	lives = 3;
	aliensKilled = 10;
	
	double engineTemp = 6572.89;

	cout << "\nScore: " << score << endl;
	cout << "Distance: " << distance << endl;
	cout << "Play Again: " << playAgain << endl;
	cout << "Lives: " << lives << endl;
	cout << "Aliens Killed: " << aliensKilled << endl;
	cout << "Engine Temp: " << engineTemp << endl;

	int fuel;

	cout << "\nHow much fuel? ";
	cin >> fuel;
	cout << "Fuel: " << fuel << endl;

	typedef unsigned short int ushort;

	ushort bonus = 120;
	cout << "Bonus: " << bonus << endl;

	system("pause");
	return 0;
}