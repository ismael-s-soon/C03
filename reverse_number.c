#include <stdio.h>  // Inclusion de la bibliothèque standard pour les fonctions d'entrée/sortie

int main() {  // Début de la fonction principale
    int n, reversed = 0;  // Déclaration de deux entiers : n pour le nombre entré, reversed pour stocker le nombre inversé

    // Lecture de l'entier entré par l'utilisateur avec vérification de succès
    if (scanf("%d", &n) != 1) {
        return 1;  // Si la lecture échoue (l'utilisateur n'entre pas un entier), on quitte le programme avec un code d'erreur
    }

    int original = n;  // Sauvegarde de la valeur d'origine de n dans la variable original

    // Si le nombre est négatif, on le rend positif temporairement pour l'inversion
    if (n < 0) {
        n = -n;
    }

    // Boucle pour inverser les chiffres du nombre
    while (n != 0) {
        int digit = n % 10;             // Extraction du dernier chiffre du nombre
        reversed = reversed * 10 + digit;  // Ajout du chiffre à la fin du nombre inversé
        n /= 10;                         // Suppression du dernier chiffre du nombre
    }

    // Si le nombre original était négatif, on rend le résultat inversé aussi négatif
    if (original < 0) {
        reversed = -reversed;
    }

    // Affichage du résultat
    printf("Nombre inversé : %d\n", reversed);

    return 0;  // Fin du programme avec un code de succès
}
