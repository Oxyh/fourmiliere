//
// Created by Adrien on 18/06/2020.
//

#include <iostream>
#include "guerriere.h"

using namespace std;

void Guerriere::fight() {
    //enelve de la vie à chaque tours aux deux fourmis qui se battent
}

Guerriere::Guerriere(int health, int maturity, int positionX, int positionY) : Fourmi(health,maturity,positionX,positionY){

}

void Guerriere::BougerFourmi() {

    cout<< " La fourmi est en position x:" <<positionX<< " y: "<< positionY<< endl;
    std::cout << "Bouge petite fourmi" << std::endl;

}
