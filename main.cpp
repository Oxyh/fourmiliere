#include <iostream>
#include "environment.h"
#include <limits>

using namespace std;

int main(int argc, char** arg) {
    int tour=1;
    cout << "Saisir la hauteur de la carte" << endl;
    int height;
    cin >> height;
    cout << cin.fail() << endl;
    cout << height << endl;
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
    cout << cin.fail() << endl;
    cout << width << endl;
    while (cin.fail()){
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Mauvais choix" << endl;
        cin >> width;
    }


    Environment map(height, width);
    cout << "Environement : " << map.getHeight() << "x" << map.getWidth() << endl;
//    while (tour>0){
//        cout << tour << endl;
//        tour++;
//    }
    return 0;
}
