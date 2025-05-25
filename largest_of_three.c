#include <stdio.h> // #include : directive pour inclure une bibliothèque
                   // <stdio.h> : standard input/output, pour printf et scanf

int main() { // int : type de retour, main() : point d’entrée du programme
    int a, b, c; // int : déclare des entiers, a, b, c : variables pour stocker 3 nombres

    scanf("%d %d %d", &a, &b, &c); 
    // scanf : lit les entrées clavier
    // "%d %d %d" : format pour lire 3 entiers
    // &a, &b, &c : adresses où stocker les valeurs saisies

    if (a >= b && a >= c) { 
    // if : test une condition
    // a >= b : vérifie si a est plus grand ou égal à b
    // && : opérateur logique ET
    // a >= c : vérifie si a est aussi plus grand ou égal à c
        printf("Le plus grand nombre est : %d\n", a); 
        // printf : affiche du texte + valeur
        // %d : affiche a
        // \n : retour à la ligne
    } else if (b >= a && b >= c) { 
    // else if : sinon, teste une autre condition
    // b >= a && b >= c : vérifie si b est le plus grand ou égal aux autres
        printf("Le plus grand nombre est : %d\n", b); 
    } else { 
    // else : tous les autres cas (donc ici c est le plus grand)
        printf("Le plus grand nombre est : %d\n", c); 
    }

    return 0; 
    // return : fin du programme
    // 0 : code de sortie indiquant que tout s’est bien passé
}
