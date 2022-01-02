#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void genererNombres (unsigned int *tab, int n) {
    int i;

    for (i = 0; i < n; i++) {
        tab[i] = rand() % 6;
    }
}

int nombre (unsigned int *tab, int n) {
    int i;

    unsigned int nombre = 0;

    // 212
    
    for (i = 0; i < n; i++) {
        nombre += tab[i] * pow(10, n - i - 1);
    }

    printf ("nombre(tab) : %u\n", nombre);
    return nombre;
}

void afficher_lettre (int lettre_i, int indice) {
    FILE* lettre;
    int i, j, nb_i = 0;
    
    switch (lettre_i) {
        case 0 :
            lettre = fopen("lettre_a.txt", "r");
        break;
        case 1 :
            lettre = fopen("lettre_o.txt", "r");
        break;
        case 2 :
            lettre = fopen("lettre_b.txt", "r");
        break;
        case 3 :
            lettre = fopen("lettre_n.txt", "r");
        break;
        case 4 :
            lettre = fopen("lettre_i.txt", "r");
        break;
        case 5 :
            lettre = fopen("lettre_c.txt", "r");
        break;
    }
}

void afficher_lettres (int mot[3]) {
    int i;
    char vitrine[40][70];
    int j;

    for (i = 0; i < 20; i++) {
        for (j = 0; j < 70; j++) {
            vitrine[i][j] = 0;
        }
    }

    for (i = 0; i < 3; i++) {
        afficher_lettre(0, i);
    }
}

void afficher_lettre2 (unsigned int *tab) {
    int i = 0;
    
    while (i < 3) {
        afficher_lettre(tab[i], i);
        i++;
    }
}

int main () {
    char lettres[6] = "AOBNIC";
    char commande = 'o';

    unsigned int mot[3] = { 1, 2, 3 };

    int arret = 0;
    unsigned int credit;
    unsigned int mise;


    afficher_lettre2(mot);


    printf("Insérez votre nombre de crédit :\n");
    scanf("%u", &credit);

    while (credit > 0 && commande == 'o') {
        printf ("Insérer un crédit (1, 2 ou 3) :\n");

        if (scanf("%u", &mise) != 1) {
            break;
        }

        else if (mise > 3) {
            printf("Crédit invalide.\n");
            break;
        }

        genererNombres (mot, 3);

        switch (nombre(mot, 3)) {
            case 212 :
                printf("BOB\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 1000 crédits.\n");
                        credit += 1000;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 2000 crédits.\n");
                        credit += 2000;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 3000 crédits.\n");
                        credit += 3000;
                        break;
                }
            break;
            case 202 :
                printf("BAB\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 500 crédits.\n");
                        credit += 500;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 1000 crédits.\n");
                        credit += 1000;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 1500 crédits.\n");
                        credit += 1500;
                        break;
                }
            break;
            case 503 :
                printf("CAN\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 200 crédits.\n");
                        credit += 200;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 400 crédits.\n");
                        credit += 400;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 600 crédits.\n");
                        credit += 600;
                        break;
                }
            break;
            case 543 :
                printf("CIN\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 150 crédits.\n");
                        credit += 150;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 300 crédits.\n");
                        credit += 300;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 450 crédits.\n");
                        credit += 450;
                        break;
                }
            break;
            case 345 :
                printf("NIC\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 100 crédits.\n");
                        credit += 100;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 200 crédits.\n");
                        credit += 200;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 300 crédits.\n");
                        credit += 300;
                        break;
                }
            break;
            case 210 :
                printf("BOA\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 90 crédits.\n");
                        credit += 90;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 180 crédits.\n");
                        credit += 180;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 270 crédits.\n");
                        credit += 270;
                        break;
                }
            break;
            case 502 :
                printf("CAB\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 80 crédits.\n");
                        credit += 80;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 160 crédits.\n");
                        credit += 160;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 240 crédits.\n");
                        credit += 240;
                        break;
                }
            break;
            case 145 :
                printf("OIC\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 70 crédits.\n");
                        credit += 70;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 140 crédits.\n");
                        credit += 140;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 210 crédits.\n");
                        credit += 210;
                        break;
                }
            break;
            case 313 :
                printf("NON\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 60 crédits.\n");
                        credit += 60;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 120 crédits.\n");
                        credit += 120;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 180 crédits.\n");
                        credit += 180;
                        break;
                }
            break;
            case 213 :
                printf("BON\n");
                switch (mise) {
                    case 1 :
                        printf ("Vous avez gagné 50 crédits.\n");
                        credit += 50;
                        break;
                    case 2 :
                        printf ("Vous avez gagné 100 crédits.\n");
                        credit += 100;
                        break;
                    case 3 :
                        printf ("Vous avez gagné 150 crédits.\n");
                        credit += 150;
                        break;
                }
            break;
            default : 
                printf ("Vous avez perdu %u crédit\n", mise);
                printf ("NOMBRE : %u\n", nombre(mot, 3));
                credit -= mise;
        }

        printf("Vous avez actuellement %u crédits.\nVoulez-vous continuer de jouer ? (Taper : \"o\") \n", credit);
        scanf(" %c", &commande);
    }

    if (credit == 0) {
        printf ("Vous n'avez plus de crédit.\n");
    }

    printf("FIN DU JEU !!\n");

    return 0;
}