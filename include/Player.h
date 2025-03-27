#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
private:
	std::string name;
	double money;

public:

	Player(std::string name, double startMoney);

	std::string getName() const;
	double getMoney() const;

	void addMoney(double amount);
	void subtractMoney(double amount);
	bool canPlay() const;

	void showPlayer() const;
};

#endif
