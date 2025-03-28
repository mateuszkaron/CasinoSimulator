
#include "include/Player.h"
#include <conio.h>
#include <dos.h>
#include <windows.h>
#include <time.h>
#include <fstream>
#include "signIn.h"


using namespace std;

#define SCREEN_WIDTH 80
#define SCREEN_HEIGHT 25



HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

Player guest = Player::guest();

void setCursor(bool visible, DWORD size) {
	if (size == 0) size = 20;

	CONSOLE_CURSOR_INFO lpCursor;
	lpCursor.bVisible = visible;
	lpCursor.dwSize = size;
	SetConsoleCursorInfo(console, &lpCursor);
}

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(console, coord);
}

void gamesMenu() {

}

void leaderboard() {
	system("cls");

	ifstream read("leaderboard.txt");
	gotoxy(45, 5);   cout << "Leaderboard" << endl;
	string linia;
	while (getline(read, linia)) {
		cout << linia << endl;
	}
	_getche();

}

int main()
{

	setCursor(0, 0);
		srand((unsigned)time(NULL));

		do {
			system("cls");
			gotoxy(45, 5);   cout << " ---------------------------------";
			gotoxy(45, 6);   cout << " |       WELCOME TO CASINO       | ";
			gotoxy(45, 7);   cout << " ---------------------------------";
			gotoxy(45, 8);   cout << " |       1.    Sign in           | ";
			gotoxy(45, 9);   cout << " |       2. Play as Guest        | ";
			gotoxy(45, 10);  cout << " |       3.  Leaderbord          | ";
			gotoxy(45, 11);  cout << " |       4.     Quit             | ";
			gotoxy(45, 12);  cout << " ---------------------------------";
			gotoxy(45, 14);  cout << "Select option: ";
			char option = _getche();

			if (option == '1') signIn();
			else if (option == '2') {
				gotoxy(45, 17); guest.showPlayer();
				_getch();
			}
			else if (option == '3') leaderboard();
			else if (option == '4') exit(0);
			else {
				gotoxy(45, 15); cout << "Invalid option! Press any key to continue...";
				_getch();
			}

		} while (1);

		return 0;
}
