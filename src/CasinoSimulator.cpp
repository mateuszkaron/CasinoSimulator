// CasinoSimulator.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.

#include <iostream>
#include "Player.h"

int main()
{
    std::cout << "Hello World!\n";

	Player Player("John", 100);

	Player.showPlayer();

	Player.addMoney(50);
	Player.subtractMoney(25);

	if (Player.canPlay()) {
		std::cout << "Player can play" << std::endl;
	}
	else {
		std::cout << "Player can't play" << std::endl;
	}

}

