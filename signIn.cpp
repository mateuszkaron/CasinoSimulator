#include "../include/signIn.h"
#include <iostream>
#include <fstream>
#include <conio.h>
#include <windows.h>
#include <string>

using namespace std;


void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void signIn() {
	system("cls");
	gotoxy(45, 7); cout << "Enter your name: ";
	string name;
	getline(cin, name);

	gotoxy(45, 8); cout << "Your name " << name << endl;
}