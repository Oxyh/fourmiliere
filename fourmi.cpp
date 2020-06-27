#include "fourmi.h"

using namespace std;


//void Fourmi::afficheFourmi(FourmiType type)  {
//    switch (this->type) {
//    case FourmiType::Ouvriere:
//        std::cout << "O";
//    break;
//    case FourmiType::Guerriere:
//        std::cout << "G";
//    }
//}

Fourmi::Fourmi(int health, int maturity, int positionX, int positionY) : Larve(health,maturity,positionX,positionY){

}

//Fourmi::Fourmi() {}

Fourmi::~Fourmi()
{
//	cout << "A fourmi died ... in position " << this->GetPosition() << " and his maturity was " << this->GetMaturiy();
}


