//
// Created by fabien on 27/05/2020.
//

#include "environment.h"

Environment::Environment(int height, int width) {
    if (height<10){
        height=10;
    }
    if (width<10){
        width=10;
    }
    this->height = height;
    this->width = width;
}

Environment::Environment() {}

int Environment::getHeight() const {
    return height;
}

void Environment::setHeight(int height) {
    this->height  = height;
}

int Environment::getWidth() const {
    return width;
}

void Environment::setWidth(int width) {
    this->width = width;
}

Environment::~Environment() {

}