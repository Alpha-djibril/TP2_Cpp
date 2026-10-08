#include "Catalogue.hpp"

int main(void){
    TrajetSimple t1 = TrajetSimple(Voiture,"Paris","Bruxelles");
    Cell c = Cell(t1,NULL);
     TrajetSimple t2 = TrajetSimple(Train,"Bruxelles","Berlin");
    Cell c2 = Cell(t2,NULL);
    Liste* l = new Liste(&c);
    Catalogue *cat = new Catalogue(l,0);
   

    while(1) {
        printf("menu:\n");
        printf("\t1: ajouter un trajet\n");
        /*printf("\t2: afficher le catalogue\n");
        printf("\t3: rechercher un trajet\n");
        printf("\t4: ajouter un trajet\n");
        printf("\t5: supprimer un trajet\n");*/
        printf("\t0: quitter\n");

        int choix;
        scanf("%d", &choix);

        switch(choix) {
            case 0:
                goto fin;
            case 1:
                (*cat).Ajouter(&c2);
                c.data.Afficher();
                c2.data.Afficher();
                c2.next->data.Afficher();
                break;
            case 2:
                //cat.Afficher();
                break;
            case 3:
                //cat.rechercher();
                break;
            case 4:
                //ajouter_en_queue(&list);
                break;
            case 5:
                //supprimer(&list);
                break;
            case 6:
                //dupliquer(&list);
                break;
            default:
                printf("choix incorrect\n");
                continue ; // revenir au menu
        }
    }
    fin:
    printf("au revoir\n");
    return 0;
}