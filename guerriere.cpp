#include <iostream>
#include <random>
#include "guerriere.h"

using namespace std;

void Guerriere::fight() {
    //enelve de la vie à chaque tours aux deux fourmis qui se battent
}

Guerriere::Guerriere(int health, int maturity, int positionX, int positionY) : Fourmi(health,maturity,positionX,positionY){

}

void Guerriere::BougerFourmi() {
    cout<< " La fourmi est en position initiale x:" <<positionX<< " y: "<< positionY<< endl;
//    std::random_device alea;
//    std::mt19937 generator(alea());
//    std::uniform_int_distribution<int> distribution(1,4);
//    cout<< distribution(generator)<<endl;
    int alea;
    alea=rand()%4;

    if (alea==0) {
        positionX+=1;
        cout<< " La fourmi a bouge de +1 x x:" <<positionX<< " y: "<< positionY<< endl;
    }
    if (alea==1){
        positionX-=1;
        cout<< " La fourmi a bouge de -1 x x:" <<positionX<< " y: "<< positionY<< endl;
    }
    if (alea==2) {
        positionY+=1;
        cout<< " La fourmi a bouge de +1 y x:" <<positionX<< " y: "<< positionY<< endl;
    }
    if (alea==3){
        positionY-=1;
        cout<< " La fourmi a bouge de -1 y x:" <<positionX<< " y: "<< positionY<< endl;
    }
//    cout<< " alea :" <<alea << endl;



}
