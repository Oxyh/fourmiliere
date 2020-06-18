#include "environment.h"
#include <iostream>

Environment::Environment(int height, int width, int nb_wall, int nb_food) : nb_wall(nb_wall), nb_food(nb_food){
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
            this->cases[i][j] = Sol(i, j, SolType::Vide);
        }
    }
    this->generer_cases(SolType::Nourriture);
    this->generer_cases(SolType::Obstacle);
}

void Environment::generer_cases(SolType type) {
    int compteur;
    switch (type) {
        case SolType::Nourriture:
            compteur = this->nb_food;
            break;
        case SolType::Obstacle:
            compteur = this->nb_wall;
            break;
        default:
            compteur = 0;
    }
    while (compteur > 0){
        int a = rand() % this->height;
        int b = rand() % this->width;
        while (this->cases[a][b].getType()!=SolType::Vide){
            a = rand() % this->height;
            b = rand() % this->width;
        }
        this->cases[a][b].setType(type);
        compteur--;
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

void Environment::display_map() {
    for (int i=0; i<this->height; i++){
        for (int j=0; j<this->width; j++){
            this->cases[i][j].affiche();
        }
        std::cout << std::endl;
    }
}

Environment::~Environment() {
    for (int i = 0; i < this->height; i++) {
        delete[] this->cases[i];
    }
    delete[] this->cases;
}