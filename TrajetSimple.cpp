#include "TrajetSimple.hpp"
#include "iostream"
using namespace std;

void TrajetSimple::Afficher(){
    cout << "Ville de départ: " << this->Depart << endl;
    cout << "Ville d'arrivée: " << this->Destination << endl;
    cout << "Transport: " << this->Tr << endl;
}