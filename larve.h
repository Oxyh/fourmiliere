#ifndef FOURMILIERE_LARVE_H
#define FOURMILIERE_LARVE_H



class Larve {
private:
    int health;
    int maturity;
public:
    int GetHealth();
    void setHealth(int nourriture);
    void seNourrir(int nourriture);
    int GetMaturiy();
    int getPositionX() const;
    int getPositionY() const;
    void SetPosition(int x, int y);
    Larve(int health, int maturity, int positionX, int positionY);
    virtual void BougerFourmi();
    int positionX;
    int positionY;


protected:
    Larve();

};


#endif //FOURMILIERE_LARVE_H#pragma once