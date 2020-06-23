#include "reine.h"

using namespace std;

void Reine::LayLarvae(){
    //get la position de la fourmiliere pour faire spawn la larve à l'intérieur
   // Larve();
}

Reine::Reine(int health, int maturity, int positionX, int positionY) : Fourmi(health,maturity,positionX,positionY){
    this->VraieReine=true;
}