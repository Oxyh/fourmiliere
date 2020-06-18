#ifndef FOURMILIERE_SOL_H
#define FOURMILIERE_SOL_H

enum SolType{
    Vide, Nourriture, Obstacle, Fourmiliere
};

class Sol {
private:
    int x;
    int y;
    SolType type;
public:
    Sol(int x, int y, SolType type);

    Sol();

    int getX() const;

    void setX(int x);

    int getY() const;

    void setY(int y);

    SolType getType() const;

    void setType(SolType type);

    void affiche();

    virtual ~Sol();
};


#endif //FOURMILIERE_SOL_H
