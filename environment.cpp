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
    this->cases = new Sol*[this->height];
    for (int i = 0; i < this->height; i++) {
        this->cases[i] = new Sol[this->width];
        for (int j = 0; j < this->width; ++j) {
            this->cases[i][j] = Sol();
        }
    }
}

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
    for (int i = 0; i < this->height; ++i) {
        delete[] this->cases[i];
    }
    delete[] this->cases;
}