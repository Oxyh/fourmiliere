#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include "environment.h"
#include "sol.h"
#include "fourmi.h"
using namespace std;

int input_positive_integer(string message){
    cout << message << endl;
    int value;
    cin >> value;
    while(cin.fail() || value<=0){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "La valeur entrée est incorrect, veuillez saisir une nouvelle valeure" << endl;
        cin >> value;
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    return value;
}

int main(int argc, char** arg) {
    int tour=1;

    int height = input_positive_integer("Saisir la hauteur de la carte");
    int width = input_positive_integer("Saisir la largeur de la carte");
    int nb_wall = input_positive_integer("Saisir le nombre d'obstacle de l'environnement");
    int nb_food = input_positive_integer("Saisir le nombre de source de nourriture");

    Environment map(height, width, nb_wall, nb_food);
    map.display_map();
    while (tour<5){
        cout << "Le tour actuel est: "<< tour << endl;
        vector<Larve*> tableauFourmi= map.GetTableauFourmi();
        for (int tabF=0; tabF<tableauFourmi.size(); tabF++){
            tableauFourmi[tabF]->BougerFourmi();
            cout<< " La fourmi a bougé en x:" <<tableauFourmi[tabF]->positionX<< " y: "<< tableauFourmi[tabF]->positionY<< endl;
        }
        tour++;
    }
    return 0;
}
