#ifndef FOURMILIERE_FOURMI_H
#define FOURMILIERE_FOURMI_H


#include "larve.h"



class Fourmi : Larve {

public:
	virtual ~Fourmi();
//	FourmiType getType() const;
//	void setTypeFourmi(FourmiType type);
//    void afficheFourmi(FourmiType);
//    Fourmi(int health, int maturity, int position[2], FourmiType type);
    void GatherFood();
protected:

	Fourmi();

};




#endif //FOURMILIERE_FOURMI_H#pragma once
