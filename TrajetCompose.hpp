#pragma once
#include "Trajet.hpp"

struct Liste{
    Trajet* head;
};

class TrajetCompose : public Trajet{
    private:
    Liste listeTrajet;
    public:
    TrajetCompose(Liste liste): listeTrajet(liste){}; 
};