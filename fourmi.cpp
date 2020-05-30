//
// Created by Mathieu on 27/05/2020.
//

#include "fourmi.h"

using namespace std;

int Fourmi::GetHealth() {
	return health;
}
void Fourmi::setHealth(int nourriture) {
    health = health + nourriture;
}

int Fourmi::GetMaturiy() {
	return maturity;
}

int Fourmi::GetPosition() {
	return position;
}



void Fourmi::SetPosition(int x, int y) {
	this->position[0] = x;
	this->position[1] = y;
}

Fourmi::Fourmi()
{
	Fourmi f;
	f.health = 100;
	f.maturity = 0;
	f.SetPosition(0, 0);
	return f;
}

Fourmi::~Fourmi()
{
	cout << "A fourmi died ... in position " << this->GetPosition() << " and his maturity was " << this->GetMaturiy();
}


