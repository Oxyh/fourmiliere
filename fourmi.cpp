#include "fourmi.h"
#include <iostream>

using namespace std;



//FourmiType Fourmi::getType() const {
//    return type;
//}
//void Fourmi::setTypeFourmi(FourmiType type) {
//    Fourmi::type = type;
//}



//void Fourmi::afficheFourmi(FourmiType type)  {
//    switch (this->type) {
//    case FourmiType::Ouvriere:
//        std::cout << "N";
//    break;
//    case FourmiType::Guerriere:
//        std::cout << "O";
//    }
//}

Fourmi::Fourmi(int health, int maturity, int positionX, int positionY) : Larve(health,maturity,positionX,positionY){

}

//Fourmi::Fourmi() {}

Fourmi::~Fourmi()
{
//	cout << "A fourmi died ... in position " << this->GetPosition() << " and his maturity was " << this->GetMaturiy();
}


