#include "fourmi.h"
#include <iostream>

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

int* Fourmi::GetPosition() {
	return position;
}



void Fourmi::SetPosition(int x, int y) {
	this->position[0] = x;
	this->position[1] = y;
}

void Fourmi::afficheFourmi(FourmiType type)  {
    switch (this->type) {
    case FourmiType::Ouvriere:
        std::cout << "N";
    break;
    case FourmiType::Guerriere:
        std::cout << "O";
    }
}

Fourmi::Fourmi()
{
	health = 100;
	maturity = 0;
	SetPosition(0, 0);
}

Fourmi::~Fourmi()
{
	cout << "A fourmi died ... in position " << this->GetPosition() << " and his maturity was " << this->GetMaturiy();
}


