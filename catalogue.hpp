#pragma once

#include <iostream>
#include <string>
#include <Trajet.hpp>
using namespace std;

class catalogue {
    Trajet* liste;

    void Ajouter(Trajet &trj);
    void Rechercher(string dep, string arr);
    void construire();
};
