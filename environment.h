#ifndef FOURMILIERE_ENVIRONMENT_H
#define FOURMILIERE_ENVIRONMENT_H

#include <vector>


#include "sol.h"
#include "larve.h"
#include "fourmi.h"
#include "reine.h"
#include "ouvriere.h"
#include "guerriere.h"


class Environment {
private:
    int height;
    int width;
    int nb_wall;
    int nb_food;
    int nb_fourmiliere;
    Sol **cases;
//    Fourmi **emplacement;
    void generer_cases(SolType type);


//    void generer_fourmi(FourmiType type);
    std::vector<Larve*> tableauFourmi;
public:

    Environment(int height=100, int width=50, int nb_wall=1000, int nb_food =500, int nb_fourmiliere=1);

    int getHeight() const;

    void setHeight(int height);

    int getWidth() const;

    void setWidth(int width);

    void display_map();

    virtual ~Environment();
    void generer_fourmiliere();
    std::vector<Larve*>& GetTableauFourmi();




};


#endif //FOURMILIERE_ENVIRONMENT_H
