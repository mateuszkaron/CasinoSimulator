#include <iostream>
#include "Player.h"

Player::Player(std::string name, double startMoney)
	: name(name), money(startMoney) {}

std::string Player::getName() const {
	return name;
}

double Player::getMoney() const {
	return money;
}

void Player::addMoney(double amount) {
	if (amount > 0) {
		money += amount;
	}
}

void Player::subtractMoney(double amount) {
	if (amount > 0 && money >= amount) {
		money -= amount;
	}
}

bool Player::canPlay() const {
	return money > 0;
}

void Player::showPlayer() const {
	std::cout << "Player: " << name << ", money: " << money << std::endl;
}