#pragma once

#include <string>
using namespace std;


class Trajet {
    protected:
        string Depart;
        string Destination;
       
    public:
        Trajet();
        Trajet(string depart, string destination): Depart(depart), Destination(destination){};
        virtual ~Trajet()=0;
        void Afficher();

};




