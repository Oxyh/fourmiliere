#ifndef FOURMILIERE_FOURMI_H
#define FOURMILIERE_FOURMI_H


class Fourmi {

public:

	virtual ~Fourmi();
	int GetHealth();
	void setHealth(int nourriture);
	int GetMaturiy();
	int* GetPosition();
	void SetPosition(int x, int y);


private:

	int health;
	int maturity;
	int position[2];

protected:

	Fourmi();

};




#endif //FOURMILIERE_FOURMI_H#pragma once
