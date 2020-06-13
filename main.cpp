#include <iostream>
#include <cstdlib>
#include <limits>
#include <ctime>
#include "environment.h"
#include "Sol.h"
using namespace std;

int main(int argc, char** arg) {
    int tour=1;
    cout << "Saisir la hauteur de la carte" << endl;
    int height;
    cin >> height;
    while (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Mauvais choix" << endl;
        cin >> height;
    }
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Saisir la largeur de la carte" << endl;
    int width;
    cin >> width;
    while (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Mauvais choix" << endl;
        cin >> width;
    }


    Environment map(height, width);
    cout << "Environement : " << map.getHeight() << "x" << map.getWidth() << endl;

    //Creation map ( case )
    int x=1;
    int y=1;
    int nb_case=0;
    int nb_case_obstacle=0;
    srand((unsigned int)time(0));

    while (x<=map.getHeight()){
        int nombre_aleatoire = rand()%100 + 1;
        if ( nombre_aleatoire >= 90 ) // c'est un obstacle
        {
            Sol (x,y);
            nb_case_obstacle++;

        }
        else
        {
            Sol (x,y);
            nb_case++;
        }
        if ( y == map.getWidth() )
        {
            x++;
            y=0;
        }
        y++;
    }
    int nb_case_total = nb_case+nb_case_obstacle;
    cout << "nombre de case obstacle : " << nb_case_obstacle << endl;
    cout << "nombre de case : " << nb_case << endl;
    cout << "nombre de case total : " << nb_case_total << endl;

    while (tour<5){
        tour++;



    }


    return 0;
}
