#ifndef FOURMILIERE_REINE_H
#define FOURMILIERE_REINE_H

#include "fourmi.h"

class Reine : public Fourmi {


public:
    void LayLarvae();
    Reine(int health, int maturity, int positionX, int positionY);

};


#endif //FOURMILIERE_REINE_H
