#include "Catalogue.hpp"


void Catalogue::Ajouter(Cell* c){
    c->next = NULL;
    if (listeTrajet->head == NULL) {
        listeTrajet->head = c;
    } else {
        Cell* cur = listeTrajet->head;
        while (cur->next != NULL) cur = cur->next;
        cur->next = c;
    }
    nbEl++;
}
