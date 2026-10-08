#pragma once

#include <iostream>
#include <string>
using namespace std;

class catalogue {
    Trajet* liste;

    void Ajouter(Trajet &trj);
    void Rechercher(string dep, string arr);
    
};
