#pragma once

#include <iostream>
#include <string>
#include <Liste.hpp>
using namespace std;

class Catalogue {
    protected:
    Liste listeTrajet;
    int nbEl;
    public:
    Catalogue(Liste l, int n): listeTrajet(l), nbEl(n){};
    void Ajouter(Cell* tr);
    void Rechercher(string dep, string arr);
    void construire();
};
