//#include <iostream>
//#include <string>
//using namespace std;
//
//int main()
//{
//	const int ROWS = 3;
//	const int COLUMNS = 3;
//	char board[ROWS][COLUMNS] = { 
//		{ 'O', 'X', 'O' },
//		{ ' ', 'X', 'X' },
//		{ 'X', 'O', 'O' } 
//	};
//
//	cout << "Here's the tic-tac-toe board:\n";
//	for (int a = 0; a < ROWS; ++a) {
//		for (int b = 0; b < COLUMNS; b++) {
//			cout << board[a][b];
//		}
//		
//		cout << endl;
//	}
//
//	cout << "\n'X' moves to the empty location.\n\n";
//	board[1][0] = 'X';
//	
//	cout << "Now the tic-tac-toe board is:\n";
//	for (int a = 0; a < ROWS; ++a) {
//		for (int b = 0; b < COLUMNS; b++) {
//			cout << board[a][b];
//		}
//
//		cout << endl;
//	}
//
//	cout << "\n'X' wins!";
//	system("pause");
//	return 0;
//}