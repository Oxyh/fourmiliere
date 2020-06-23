#ifndef FOURMILIERE_OUVRIERE_H
#define FOURMILIERE_OUVRIERE_H

#include "fourmi.h"

class Ouvriere: public Fourmi {
public:
    void FeedLarvae(); //ajoute de la vi à la larve nourrie par l'ouvriere
    Ouvriere(int health, int maturity, int positionX, int positionY);
};


#endif //FOURMILIERE_OUVRIERE_H
