#ifndef FOURMILIERE_ENVIRONMENT_H
#define FOURMILIERE_ENVIRONMENT_H

#include "sol.h"

class Environment {
private:
    int height;
    int width;
    int nb_wall;
    int nb_food;
    int nb_fourmiliere;
    Sol **cases;
    void generer_cases(SolType type);


public:
    Environment(int height=100, int width=50, int nb_wall=1000, int nb_food =500, int nb_fourmiliere=1);

    int getHeight() const;

    void setHeight(int height);

    int getWidth() const;

    void setWidth(int width);

    void display_map();

    virtual ~Environment();

    void generer_fourmiliere();

};


#endif //FOURMILIERE_ENVIRONMENT_H
