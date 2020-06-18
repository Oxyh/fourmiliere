#ifndef FOURMILIERE_ENVIRONMENT_H
#define FOURMILIERE_ENVIRONMENT_H

#include "sol.h"

class Environment {
private:
    int height;
    int width;
    int nb_wall;
    int nb_food;
    Sol **cases;

    void generer_cases(SolType type);
public:
    Environment(int height=100, int width=50, int nb_wall=1000, int nb_food =500);

    int getHeight() const;

    void setHeight(int height);

    int getWidth() const;

    void setWidth(int width);

    void display_map();

    virtual ~Environment();
};
#endif //FOURMILIERE_ENVIRONMENT_H
