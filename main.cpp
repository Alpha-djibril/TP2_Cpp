#include <Catalogue>

int main(void){
    Catalogue cat;
    cat.construire();

    while(1) {
        printf("menu:\n");
        printf("\t1: ajouter en tete\n");
        printf("\t2: afficher le catalogue\n");
        printf("\t3: rechercher une valeur\n");
        printf("\t4: ajouter en queue\n");
        printf("\t5: supprimer une valeur\n");
        printf("\t0: quitter\n");

        int choix;
        scanf("%d", &choix);

        switch(choix) {
            case 0:
                goto fin;
            case 1:
                ajouter_en_tete(&list);
                break;
            case 2:
                afficher(&list);
                break;
            case 3:
                rechercher(&list);
                break;
            case 4:
                ajouter_en_queue(&list);
                break;
            case 5:
                supprimer(&list);
                break;
            case 6:
                dupliquer(&list);
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