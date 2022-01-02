#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int nb_blocs = 57;

int hauteur = 5;
int longueur = 5;

int h_plateau = 0;
int l_plateau = 0;

int rate = 0;  // Pour compter le nombre de tentatives ratées et de tours en tout

void creer_tab2D_dyn (int tab[hauteur][longueur]) {
	int i;
	int j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			tab[i][j] = 0;
		}
	}
}

// Convertion int a char
char convert_i_to_c (int i) {
    if (i == 1) {
        return '*';
    }

    else if (i == 0) {
        return '.';
    }
}

// Convertion char a int
int convert_c_to_i (char c) {
    if (c == '*' || c == ' ') {
        return 1;
    }

    else if (c == '.') {
        return 0;
    }
}
	
// Elements du grand tableau

// Les 4 premiers en forme de L
void creer_bloc_6 (int tab[hauteur][longueur]) { // 1
	int i, j;

	for (i = 1; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 0) {
				tab[i][j] = 1;
			}

			if (i == hauteur - 1) {
				tab[i][j] = 1;
			}
		}
	}
}

void creer_bloc_7 (int tab[hauteur][longueur]) { // 2
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (i == hauteur - 1) {
				tab[i][j] = 1;
			}

			if (j == longueur - 1) {
				tab[i][j] = 1;
			}
		}
	}
}

void creer_bloc_8 (int tab[hauteur][longueur]) { // 3
	int i, j;

	for (i = 1; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (i == 0) {
				tab[i][j] = 1;
			}

			if (j == 1) {
				tab[i][j] = 1;
			}
		}
	}
}

void creer_bloc_9 (int tab[hauteur][longueur]) { // 4
	int i, j;

	for (i = 1; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			if (i == 0) {
				tab[i][j] = 1;
			}

			if (j == 0) {
				tab[i][j] = 1;
			}
		}
	}
}

void creer_bloc_10 (int tab[hauteur][longueur]) { // 5
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (j == 0) {
				tab[i][j] = 1;
			}
		}
	}

    tab[1][1] = 1;
}

void creer_bloc_11 (int tab[hauteur][longueur]) { // 6
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (j == 1) {
				tab[i][j] = 1;
			}
		}
	}

    tab[0][1] = 1;
}

void creer_bloc_13 (int tab[hauteur][longueur]) { // 7
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 1) {
				tab[i][j] = 1;
			}
		}
	}

    tab[0][0] = 1;
}

void creer_bloc_12 (int tab[hauteur][longueur]) { // 8
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 2; j++) {
			if (j == 0) {
				tab[i][j] = 1;
			}
		}
	}

    tab[3 - 1][1] = 1;
}

void creer_bloc_14 (int tab[hauteur][longueur]) { // 9
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (j <= 1 && i == 1) {
				tab[i][j] = 1;
			}

            if (j >= 1 && i == hauteur - 1) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_15 (int tab[hauteur][longueur]) { // 10
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (j <= 1 && i == 1) {
				tab[i][j] = 1;
			}

            if (j >= 1 && i == 0) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_16 (int tab[hauteur][longueur]) { // 11
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (i <= 1 && j == 1) {
				tab[i][j] = 1;
			}
		}
	}

    tab[1][1] = 1;
}

void creer_bloc_17 (int tab[hauteur][longueur]) { // 12
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (i <= 1 && j == 0) {
				tab[i][j] = 1;
			}
		}
	}

    tab[2][1] = 1;
}

// A verifier en haut

void creer_bloc_18 (int tab[hauteur][longueur]) { // 13
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (j == 0) {
				tab[i][j] = 1;
			}
		}
	}
}

void creer_bloc_21 (int tab[hauteur][longueur]) { // 19
	int i, j;

	tab[0][0] = 1;
}

void creer_bloc_50 (int tab[hauteur][longueur]) { // 32
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 2; j++) {
			tab[i][j] = 1;
		}
	}
}

void creer_bloc_23 (int tab[hauteur][longueur]) { // 21, 46
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			tab[i][j] = 1;
		}
	}
}

void creer_bloc_49 (int tab[hauteur][longueur]) { // 26
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if (i == 5 - 1) {
				tab[i][j] = 1;
			}
		}
	}
}

void creer_bloc_24 (int tab[hauteur][longueur]) { // 19
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			tab[i][j] = 1;
		}
	}
}

void creer_bloc_25 (int tab[hauteur][longueur]) { // 22
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (i > 1) {
				tab[i][j] = 1;
			}
		}
	}
}

void creer_bloc_27 (int tab[hauteur][longueur]) { // 25
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (i == 0) {
				tab[i][j] = 1;
			}
		}
	}

    tab[1][0] = 1;
    tab[1][longueur - 1] = 1;
}

void creer_bloc_28 (int tab[hauteur][longueur]) { // 28
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (j == 0) {
				tab[i][j] = 1;
			}

            if (i == 3) {
                tab[i][j] = 1;
            }
		}
	}

    tab[3][3] = 1;
}

void creer_bloc_29 (int tab[hauteur][longueur]) { // 27
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (j == 0) {
				tab[i][j] = 1;
			}

            if (j == 4 - 1) {
                tab[i][j] = 1;
            }

            if (i == 4 - 1) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_30 (int tab[hauteur][longueur]) { // 30
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i > 1) {
                tab[i][j] = 1;
            }
		}
	}

    tab[2][4 - 1] = 1;
}

void creer_bloc_31 (int tab[hauteur][longueur]) { // 31
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 3; j++) {
			if (i == 0) {
                tab[i][j] = 1;
            }

            if (i == 4 - 1) {
                tab[i][j] = 1;
            }

            if (j == 3 - 1) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_32 (int tab[hauteur][longueur]) { // 33
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == j) {
                tab[i][j] = 1;
                tab[i+1][j] = 1;
            }
		}
	}
}

void creer_bloc_33 (int tab[hauteur][longueur]) { // 34
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == 4 - j - 1) {
                tab[i][j] = 1;
                if (i != 4 - 1)
                tab[i][j+1] = 1;
            }
		}
	}
}

void creer_bloc_34 (int tab[hauteur][longueur]) { // 35
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == 4 - j - 1) {
                tab[i][j] = 1;
                tab[i+1][j] = 1;
            }
		}
	}
}

void creer_bloc_35 (int tab[hauteur][longueur]) { // 36
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == j) {
                tab[i][j] = 1;
                tab[i][j+1] = 1;
            }
		}
	}
}

void creer_bloc_36 (int tab[hauteur][longueur]) { // 37
	int i, j;

	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			if (i == 0) {
                tab[i][j] = 1;
            }

            if (j == 1 || j == 2) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_37 (int tab[hauteur][longueur]) { // 39
	int i, j;

	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			if ((i == 1 || i == 2) && j == i) {
                tab[i][j] = 1;
            }
		}
	}

    tab[0][0] = 1;
    tab[5 - 1][0] = 1;
    tab[0][5 - 1] = 1;
    tab[5 - 1][0] = 1;
}

void creer_bloc_38 (int tab[hauteur][longueur]) { // 40
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 4; j++) {
			if (i == 2 || 4 - 1 == j) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_68 (int tab[hauteur][longueur]) { // 41
	int i, j;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            if (i == 2 || 4 - 1 == j) {
                tab[0][j] = 1;
            }
        }
    }
}

void creer_bloc_39 (int tab[hauteur][longueur]) { // 42
	int i, j;

	for (i = 0; i < 2; i++) {
		for (j = 0; j < 5; j++) {
            if (i == 0)
            tab[i][j] = 1;
		}
	}

    tab[2 - 1][5 - 1] = 1;
}

void creer_bloc_40 (int tab[hauteur][longueur]) { // 43
	int i, j, x = 0;

	for (i = 1; i <= hauteur; i++) {
        for (j = 1; j <= i - hauteur; j++) {
            tab[i][x] = ' ';
            x++;
        }

        for (j = 1; j <= longueur - 2 * i; j++) {
            tab[i][x] = '.';
            x++;
        }

        x = 0;
    }
}

void creer_bloc_51 (int tab[hauteur][longueur]) { // 44
	int i, j, g, d;

	for (i=0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            if (j == 1)

            tab[i][j] = 1;
        }
    }

    tab[0][0] = 1;
}

void creer_bloc_52 (int tab[hauteur][longueur]) { // 45
	int i, j, g, d;

	for (i=0; i < 4; i++) {
        for (j = 0; j < 2; j++) {
            if (j == 0)

            tab[i][j] = 1;
        }
    }

    tab[0][4-1] = 1;
}

void creer_bloc_53 (int tab[hauteur][longueur]) { // 47
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == 1) {
                tab[i][j] = 1;
            }
		}
	}

    tab[0][0] = 1;
    tab[hauteur-1][longueur-1] = 1;
}

void creer_bloc_43 (int tab[hauteur][longueur]) { // 48
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (i == 1 || j == 1) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_44 (int tab[hauteur][longueur]) { // 49
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (j == 1) {
                tab[i][j] = 1;
            }
		}
	}

    tab[0][0] = 1;
    tab[hauteur-1][longueur-1] = 1;
}

void creer_bloc_45 (int tab[hauteur][longueur]) { // 51
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (i == 1) {
                tab[i][j] = 1;
            }
		}
	}

    tab[hauteur-1][0] = 1;
    tab[0][longueur-1] = 1;
}

void creer_bloc_46 (int tab[hauteur][longueur]) { // 52
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (j == 1) {
                tab[i][j] = 1;
            }
		}
	}

    tab[hauteur-1][0] = 1;
    tab[0][longueur-1] = 1;
}

void creer_bloc_47 (int tab[hauteur][longueur]) { // 53
	int i, j;

	for (i = 0; i < hauteur; i++) {
		for (j = 0; j < longueur; j++) {
			if (i == j) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_54(int tab[hauteur][longueur]) { // 54
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == 3 - j - 1) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_55(int tab[hauteur][longueur]) { // 55
	int i, j;

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == j) {
                tab[i][j] = 1;
            }
		}
	}
}

void creer_bloc_56(int tab[hauteur][longueur]) { // 57
	int i, j;

	for (i = 0; i < 3; i++) {
        if (i >= 1) {
            tab[i][0] = 1;
        }
	}
}

void creer_bloc_57(int tab[hauteur][longueur]) { // 56
	int i, j;

	for (i = 0; i < 3; i++) {
        tab[1][i] = 1;
	}
}

void creer_bloc_58(int tab[hauteur][longueur]) { // 14
	int i, j;

	for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            tab[i][j] = 1;
        }
	}
}

void creer_bloc_59(int tab[hauteur][longueur]) { // 15
	int i, j;

	for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (j <= 1) {
                tab[0][j] = 1;
            }

            if (j >= 1) {
                tab[1][j] = 1;
            }
        }
	}
}

void creer_bloc_60(int tab[hauteur][longueur]) { // 16
	int i, j;

	for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (j <= 1) {
                tab[1][j] = 1;
            }

            if (j >= 1) {
                tab[0][j] = 1;
            }
        }
	}
}

void creer_bloc_61(int tab[hauteur][longueur]) { // 17
	int i, j;

	for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (i <= 1) {
                tab[i][1] = 1;
            }

            if (i >= 1) {
                tab[i][0] = 1;
            }
        }
	}
}

void creer_bloc_62(int tab[hauteur][longueur]) { // 18
	int i, j;

	for (i = 0; i < 3; i++) {
        for (j = 0; j < 2; j++) {
            if (i <= 1) {
                tab[i][0] = 1;
            }

            if (i >= 1) {
                tab[i][1] = 1;
            }
        }
	}
}

void creer_bloc_63(int tab[hauteur][longueur]) { // 20
	int i, j;

	for (i = 0; i < 4; i++) {
        tab[i][j] = 1;
	}
}

void creer_bloc_64(int tab[hauteur][longueur]) { // 23
	int i, j;

	for (i = 0; i < 5; i++) {
        tab[i][0] = 1;
	}
}

void creer_bloc_65(int tab[hauteur][longueur]) { // 24
	int i, j;

	for (i = 0; i < 5; i++) {
        tab[0][i] = 1;
	}
}

void creer_bloc_66(int tab[hauteur][longueur]) { // 29
	int i, j;

	for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (i == 0) {
                tab[i][j] = 1;
            }

            if (j == 3) {
                tab[i][j] = 1;
            }
        }
	}
}

void creer_bloc_67(int tab[hauteur][longueur]) { // 50
	int i, j;

	for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (i == 1) {
                tab[i][j] = 1;
            }

            if (j == 1) {
                tab[i][j] = 1;
            }
        }
	}
}

void remplir_case_tab (int tab[hauteur][longueur], int i) {
    switch (i) {
		case 0 :
			creer_bloc_6(tab);
        break;
		case 1 :
			creer_bloc_7(tab);
		break;
        case 2 :
			creer_bloc_8(tab);
		break;
        case 3 :
			creer_bloc_9(tab);
		break;
        case 4 :
			creer_bloc_10(tab);
		break;
        case 5 :
			creer_bloc_11(tab);
        break;
        case 6 :
            creer_bloc_13(tab);
        break;
        case 7 :
            creer_bloc_12(tab);
        break;
        case 8 :
            creer_bloc_14(tab);
        break;
        case 9 :
            creer_bloc_15(tab);
        break;
        case 10 :
            creer_bloc_16(tab);
        break;
        case 11 :
            creer_bloc_17(tab);
        break;
        case 12 :
            creer_bloc_18(tab);
        break;
        case 13 :
			creer_bloc_58(tab);
        break;
		case 14 :
			creer_bloc_59(tab);
		break;
        case 15 :
			creer_bloc_60(tab);
		break;
        case 16 :
			creer_bloc_61(tab);
		break;
        case 17 :
			creer_bloc_62(tab);
		break;
        case 18 :
			creer_bloc_21(tab);
        break;
        case 19 :
            creer_bloc_63(tab);
        break;
        case 20 :
            creer_bloc_23(tab);
        break;
        case 21 :
            creer_bloc_25(tab);
        break;
        case 22 :
            creer_bloc_64(tab);
        break;
        case 23 :
            creer_bloc_65(tab); 
        break;
        case 24 :
            creer_bloc_27(tab);
        break;
        case 25 :
            creer_bloc_49(tab);
        break;
        case 26 :
			creer_bloc_29(tab);
        break;
		case 27 :
			creer_bloc_28(tab);
		break;
        case 28 :
			creer_bloc_66(tab);
		break;
        case 29 :
			creer_bloc_30(tab);
		break;
        case 30 :
			creer_bloc_31(tab);
		break;
        case 31 :
			creer_bloc_50(tab);
        break;
        case 32 :
            creer_bloc_32(tab);
        break;
        case 33 :
            creer_bloc_33(tab);
        break;
        case 34 :
            creer_bloc_34(tab);
        break;
        case 35 :
            creer_bloc_35(tab);
        break;
        case 36 :
            creer_bloc_36(tab);
        break;
        case 37 :
            creer_bloc_68(tab);
        break;
        case 38 :
            creer_bloc_37(tab);
        break;
        case 39 :
			creer_bloc_38(tab);
        break;
		case 40 :
			creer_bloc_68(tab);
		break;
        case 41 :
			creer_bloc_68(tab);
		break;
        case 42 :
			creer_bloc_40(tab);
		break;
        case 43 :
			creer_bloc_51(tab);
		break;
        case 44 :
			creer_bloc_52(tab);
        break;
        case 45 :
            creer_bloc_23(tab);
        break;
        case 46 :
            creer_bloc_53(tab);
        break;
        case 47 :
            creer_bloc_43(tab);
        break;
        case 48 :
            creer_bloc_44(tab);
        break;
        case 49 :
            creer_bloc_67(tab);
        break;
        case 50 :
            creer_bloc_45(tab);
        break;
        case 51 :
            creer_bloc_46(tab);
        break;
        case 52 :
            creer_bloc_47(tab);
        break;
        case 53 :
            creer_bloc_54(tab);
        break;
        case 54 :
            creer_bloc_55(tab);
        break;
        case 55 :
            creer_bloc_57(tab);
        break;
        case 56 :
            creer_bloc_56(tab);
        break;
    }
}

void afficher_blocs (int blocs[hauteur][longueur]) {
	int i = 0;
	int j = 0;

    for (j = 0; j < hauteur; j++) {
        for (i = 0; i < longueur; i++) {
            printf(" %c ", convert_i_to_c(blocs[j][i]));
        }

        printf("\n");
    }
}

void afficher_plateau (char plateau[h_plateau][l_plateau]) {
	int i, j;

	for (i = 0; i < h_plateau; i++) {
        printf ("%d|", i);

		for (j = 0; j < l_plateau; j++) {
			printf("%c", plateau[i][j]);
        }
		printf("\n");
	}
}

int etat_ligne (char tab_ligne[h_plateau][l_plateau], int ligne) {
    int i;
    int o = 1; // Variable à retourner (1 ou 0)
    
    for (i = 0; i < l_plateau; i++) {
        if (convert_c_to_i(tab_ligne[i][ligne]) != 1) {
            o = 0; // Si la ligne est occupée affecter 0 à o
        }
    }

    return o;
}

int etat_colonne (char tab_colonne[h_plateau][l_plateau], int colonne) {
    int i;
    int o = 1; // Variable à retourner (1 ou 0)

    for (i = 0; i < h_plateau; i++) {
        if (convert_c_to_i(tab_colonne[i][colonne]) != 1) {
            o = 0; // Si la colonne est occupée affecter 0 à o
        }
    }

    return o;
}

void annuler_ligne (char tab_ligne[h_plateau][l_plateau], int ligne) {
    int i;

    for (i = 0; i < l_plateau; i++) {
        tab_ligne[ligne][i] = convert_i_to_c(0); // De cette manière, on supprime l'élément de la ligne
    }
}

void annuler_colonne(char tab_colonne[h_plateau][l_plateau], int colonne) {
    int i;

    for (i = 0; i < h_plateau; i++) {
        tab_colonne[i][colonne] = convert_i_to_c(0); // De cette manière, on supprime l'élément de la colonne
    }
}

void decaler_lignes (char tab_ligne[h_plateau][l_plateau], int ligne) {
    int i;

    for (i = 0; i < l_plateau; i++) {
        if (tab_ligne[ligne][i] == convert_i_to_c(1)) {
            // On ne décale que si l'élément de la ligne est occupé
            tab_ligne[ligne+1][i] = convert_i_to_c(1);
        }
    } 
}

int calcul_score (char tab[h_plateau][l_plateau]) {
    int i;
    int j;
    int score = 0;

    for (i = 0; i < h_plateau; i++) {
        for (j = 0; j < l_plateau; j++) {
            if (etat_colonne(tab, j) == 1) {
                annuler_colonne(tab, j);
                score += 100;
            }
        }

        if (etat_ligne(tab, i) == 1) {
            annuler_ligne(tab, i);
            decaler_lignes(tab, i-1);
            score += 100;
        }
    }

    return score;
}

// +
int verif_validite (int plateau[h_plateau][l_plateau], int bloc[hauteur][longueur], int x, int y) {
    if (plateau[y][x] == bloc[y][x]) {
        return 0;
    }

    else {
        return 1;
    }
}

void selectionner_blocs (int tab[hauteur][longueur]) {
    int indice;
    int tab_choix[3] = {0};
    int i;
    int x;

    int tab_modele1[hauteur][longueur];
    int tab_modele2[hauteur][longueur];
    int tab_modele3[hauteur][longueur];

    // Génère aléatoirement un bloc :

    creer_tab2D_dyn(tab_modele1);
    creer_tab2D_dyn(tab_modele2);
    creer_tab2D_dyn(tab_modele3);

    tab_choix[0] = rand() % 57;

    for (i = 1; i < 3; i++) {
        while (tab_choix[i] == tab_choix[i-1] || tab_choix[i] == 0) {
            srand(time(0));
            tab_choix[i] = rand() % 57;
        }
    }

    remplir_case_tab(tab_modele1, tab_choix[0]);
    remplir_case_tab(tab_modele2, tab_choix[1]);
    remplir_case_tab(tab_modele3, tab_choix[2]);

    afficher_blocs(tab_modele1);
    printf ("       1     \n");
    afficher_blocs(tab_modele2);
    printf ("       2     \n");
    afficher_blocs(tab_modele3);
    printf ("       3     \n");

    creer_tab2D_dyn(tab);

    printf ("Choisir la forme à poser: ");
    scanf("%d", &indice);

    remplir_case_tab(tab, tab_choix[indice-1]);
}

// +
void placer_bloc (char plateau[h_plateau][l_plateau], int bloc[hauteur][longueur], int i, int j) {
    int a, b;
    int blocs_manquants = 0;

    // On inverse le sens de a pour remplir du bas vers le haut pour les coordonnées

    // Fixer une condition pour executer la boucle ou pas en voyant si on est dans la zone du plateau ou pas

    if (plateau[i][j] == '.') {
        for (a = 0; a < hauteur; a++) {
            for (b = 0; b < longueur; b++) {
                if (plateau[i+a][j+b] != ' ') {
                    plateau[a+i][b+j] = convert_i_to_c(bloc[a][b]);
                }

                else {
                    blocs_manquants++;
                }
            }
        }
    }

    else {
        rate++;
    }
}

void creer_plateau_triangle (char plateau[h_plateau][l_plateau]) {
    int i, j, x = 0;

    // Triangle
    for (i = 1; i < h_plateau; i++) {
        for (j = 1; j < l_plateau-i; j++) {
            plateau[i][x] = ' ';
            x++;
        }

        for (j = 1; j <= 2*i - 1; j++) {
            plateau[i][x] = '.';
            x++;
        }

        x = 0;
    }

    afficher_plateau(plateau);
}

void creer_plateau_losange (char plateau[h_plateau][l_plateau]) {
    int i, j, x = 0, m;

    // Triangle
    for (i = 0; i <= h_plateau/2; i++) {
        for (j = 0; j <= h_plateau/2-i; j++) {
            plateau[i][x] = ' ';
            x++;
        }

        for (j = 1; j <= 2*i - 1; j++) {
            plateau[i][x] = '.';
            x++;
        }

        x = 0;
    }

    m = i-1; // Sauvegarder le milieu

    // Triangle inversé
    for (i = m; i <= h_plateau; i++) {
        for (j = 1; j <= i - h_plateau/2; j++) {
            plateau[i][x] = ' ';
            x++;
        }

        for (j = 1; j <= 2*m + l_plateau - 2 * i + 1; j++) {
            plateau[i][x] = '.';
            x++;
        }

        x = 0;
    }

    afficher_plateau(plateau);
}

void creer_plateau_cercle (char plateau[h_plateau][l_plateau]) {

}

void init_plateau (char plateau[h_plateau][l_plateau]) {
    int i, j;

    for (i = 0; i < h_plateau; i++) {
        for (j = 0; j < l_plateau; j++) {
            plateau[i][j] = ' ';
        }
    }
}

int main () {
    int type = 0;

    int x_bloc = 0, y_bloc = 0;

    while (type == 0) {
        printf ("Choisir le plateau (1 : Triangle, 2 : Losange) : ");

        if (scanf("%d", &type) == 0) {
            printf ("Vous avez mal saisi votre référénce de plateau.\n");
            type = 0; // Pour relancer le while car la saisie a raté
        }
    }

    while (h_plateau == 0) {
        printf ("Choisir la hauteur du plateau : ");

        if (scanf("%d", &h_plateau) == 0 || h_plateau < 21) {
            printf ("Vous avez mal saisi la hauteur du plateau.\n");
            h_plateau = 0; // Pour relancer le while car la saisie a raté
        }
    }

    if (type == 1)
    l_plateau = h_plateau; // Si c'est un triangle
    
    
    if (type == 2)
    l_plateau = 2 * h_plateau; // SI c'est un losange

    char plateau[h_plateau][l_plateau];
    int blocs[hauteur][longueur];

    creer_tab2D_dyn(blocs);

    switch (type) {
        // case 3 :
        //     creer_plateau_cercle(plateau);
        // break;
        case 1 :
            init_plateau(plateau);
            creer_plateau_triangle(plateau);
        break;
        case 2 :
            init_plateau(plateau);
            creer_plateau_losange(plateau);
        break;
    }

    int score = 0;
    
    while (1) {
        printf("------------------------------------\n          BIENVENUE          \n------------------------------------\n");
        score += calcul_score(plateau);
        printf("---------------------------\n   SCORE:%d\n---------------------------\n", score);

        afficher_plateau(plateau);

        selectionner_blocs(blocs);

        while (x_bloc == 0) {
            printf("Saisir la coordonnée en hauteur du bloc : ");
            
            if (scanf("%d", &x_bloc) == 0) {
                printf("Vous avez mal saisi la hauteur du bloc que vous voulez placer.\n");
            }
        }

        while (y_bloc == 0) {
            printf("Saisir la coordonnée en longueur du bloc : ");
            
            if (scanf("%d", &y_bloc) == 0) {
                printf("Vous avez mal saisi la hauteur du bloc que vous voulez placer.\n");
            }
        }

        placer_bloc(plateau, blocs, x_bloc, y_bloc);

        if (rate == 3) {
            break;
        }

        x_bloc = 0;
        y_bloc = 0;
    }
}
