//
// Created by fabien on 27/05/2020.
//
#include <iostream>
#include "sol.h"
Sol::Sol(int x, int y) {
    this->x = x;
    this->y = y;
}

Sol::Sol() {}

int Sol::getx() const {
    return x;
}

void Sol::setx(int x) {
    this->x  = x;
}

int Sol::gety() const {
    return y;
}

void Sol::sety(int y) {
    this->y = y;
}
void Sol::affiche()  {
    std::cout << "x:" <<  x << " y:" << y << "\n" << std::endl;
}
Sol::~Sol() {

}