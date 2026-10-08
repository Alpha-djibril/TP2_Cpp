#pragma once
#include "Trajet.hpp"
#include "TrajetSimple.hpp"

struct Liste{
    TrajetSimple* head;
};

struct Cell{
    TrajetSimple data;
    TrajetSimple * next;
};

class TrajetCompose : public Trajet{
    private:
    Liste listeTrajet;
    public:
    TrajetCompose(Liste liste): listeTrajet(liste){}; 
};