#pragma once

#include <string>
using namespace std;


class Trajet {
    private:
        string Depart;
        string Destination;
       
    public:
        Trajet(string depart, string destination): Depart(depart), Destination(destination){};
        void Afficher();

};

struct Cell {
    Trajet cur;
    Trajet* next;
};


