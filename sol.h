#ifndef FOURMILIERE_SOL_H
#define FOURMILIERE_SOL_H


class Sol {
private:
    int x;
    int y;
public:
    Sol(int x, int y);

    Sol();

    int getx() const;

    void setx(int x);

    int gety() const;

    void sety(int y);

    void affiche();

    virtual ~Sol();
};


#endif //FOURMILIERE_SOL_H
