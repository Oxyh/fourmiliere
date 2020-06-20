#ifndef FOURMILIERE_FOURMI_H
#define FOURMILIERE_FOURMI_H

enum FourmiType{
    Ouvriere, Guerriere
};

class Fourmi {

private:

    int health;
    int maturity;
    int position[2];
    FourmiType type;

public:

	virtual ~Fourmi();
	int GetHealth();
	void setHealth(int nourriture);
//	FourmiType getType() const;
//	void setTypeFourmi(FourmiType type);
	int GetMaturiy();
	int* GetPosition();
	void SetPosition(int x, int y);
//    void afficheFourmi(FourmiType);
//    Fourmi(int health, int maturity, int position[2], FourmiType type);




protected:

	Fourmi();

};




#endif //FOURMILIERE_FOURMI_H#pragma once
