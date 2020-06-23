//
// Created by Adrien on 18/06/2020.
//

#ifndef FOURMILIERE_GUERRIERE_H
#define FOURMILIERE_GUERRIERE_H

#include "fourmi.h"

class Guerriere : public Fourmi{
public:
    void fight();
    Guerriere(int health, int maturity, int positionX, int positionY);

};


#endif //FOURMILIERE_GUERRIERE_H
