#ifndef FOURMILIERE_FOURMI_H
#define FOURMILIERE_FOURMI_H


#include "larve.h"



class Fourmi : public Larve {

public:
	virtual ~Fourmi();

//	void setTypeFourmi(FourmiType type);
//    void afficheFourmi(FourmiType);
//    Fourmi(int health, int maturity, int position[2], FourmiType type);
//    void GatherFood();
    Fourmi(int health, int maturity, int positionX, int positionY);
    void GetPositionFourmi();

protected:
//    Fourmi();
};




#endif //FOURMILIERE_FOURMI_H#pragma once
