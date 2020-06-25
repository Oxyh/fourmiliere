#include "larve.h"
#include <iostream>

using namespace std;

void Larve::seNourrir(int nourriture) {
    this->setHealth(nourriture);
}
int Larve::GetHealth() {
    return health;
}
void Larve::setHealth(int nourriture) {
    health = health + nourriture;
}

int Larve::GetMaturiy() {
    return maturity;
}

void Larve::SetPosition(int x, int y) {
    this->positionX = x;
    this->positionY = y;
}

Larve::Larve(int health, int maturity, int positionX, int positionY) {
    this->health=health;
    this->maturity=maturity;
    this->positionX=positionX;
    this->positionY=positionY;
}

Larve::Larve()
{
    health = 100;
    maturity = 0;
    SetPosition(0,0 );
}

int Larve::getPositionX() const {
    return positionX;
}

int Larve::getPositionY() const {
    return positionY;
}

void Larve::BougerFourmi() {

}

