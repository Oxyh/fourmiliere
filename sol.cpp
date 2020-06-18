#include <iostream>
#include "sol.h"

Sol::Sol(int x, int y, SolType type) {
    this->x = x;
    this->y = y;
    this->type = type;
}

Sol::Sol() {}

int Sol::getX() const {
    return x;
}

void Sol::setX(int x) {
    this->x  = x;
}

int Sol::getY() const {
    return y;
}

void Sol::setY(int y) {
    this->y = y;
}
void Sol::affiche()  {
    switch (this->type) {
        case SolType::Nourriture:
            std::cout << "N";
            break;
        case SolType::Obstacle:
            std::cout << "O";
            break;
        default:
            std::cout << "-";
    }
}

SolType Sol::getType() const {
    return type;
}

void Sol::setType(SolType type) {
    Sol::type = type;
}

Sol::~Sol() {

}


