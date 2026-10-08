#include "Catalogue.hpp"

Catalogue::Catalogue(Liste* l, int n=0){
    this->listeTrajet = l;
    this->nbEl = n;
}

void Catalogue::Ajouter(Cell* c){
    if (this->nbEl == 0){
        this->listeTrajet = new Liste(c);
    }
    Cell* tete;
    tete =   this->listeTrajet->head ;
    tete->next = c;
    tete->next->data = c->data;
    tete->next->next = NULL;
    tete = tete->next;

}
