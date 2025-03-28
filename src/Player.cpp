#include <iostream>
#include "../include/Player.h"
#include <random>

using namespace std;

Player::Player(string name, double startMoney)
	: name(name), money(startMoney) {}

string Player::getName() const {
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
	cout << "Player: " << name << ", money: " << money << endl;
}

Player Player::guest() {

	random_device rand;
	mt19937 gen(rand()); // Standard mersenne_twister_engine
	uniform_int_distribution<int> dist(100, 1000);
	int randomMoney = dist(gen);

	return Player("Guest", randomMoney);
}