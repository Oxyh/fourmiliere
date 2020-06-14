//
// Created by fabien on 27/05/2020.
//
#include <iostream>
#include "sol.h"
Sol::Sol(int x, int y,SolType type) {
    this->x = x;
    this->y = y;
    this->type = type;
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

int Sol::gettype() const {
    return type;
}

void Sol::settype(SolType type) {
    this->type  = type;
}

void Sol::affiche()  {
    std::cout << "x:" <<  x << " y:" << y <<  " Type:" << type <<  "\n" << std::endl;
}
Sol::~Sol() {

}