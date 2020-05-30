//
// Created by Mathieu on 30/05/2020.
//

#ifndef FOURMILIERE_FOURMI_H
#define FOURMILIERE_FOURMI_H


class Fourmi {

public:

	virtual ~Fourmi();
	int GetHealth();
	int GetMaturiy();
	int GetPosition();
	void SetPosition(int x, int y);


private:

	int health;
	int maturity;
	int[2] position;

protected:

	Fourmi();

};




#endif //FOURMILIERE_FOURMI_H#pragma once
