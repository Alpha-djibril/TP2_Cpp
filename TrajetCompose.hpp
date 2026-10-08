#pragma once
#include "Liste.hpp"


class TrajetCompose : public Trajet{
    private:
    Liste listeTrajet;
    
    public:
    TrajetCompose(Liste liste): listeTrajet(liste){};
    void get_depart();
    void get_destination();
};