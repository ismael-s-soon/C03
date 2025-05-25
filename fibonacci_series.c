#include <stdio.h>  // Inclusion de la bibliothèque standard pour les opérations d'entrée et de sortie

int main() {
    int limit;  // Variable utilisée pour stocker la borne supérieure saisie par l'utilisateur
    int a = 0, b = 1, suivant;  // Initialisation des deux premiers termes de la suite de Fibonacci et d'une variable pour le terme suivant

    scanf("%d", &limit);  // Récupération de la valeur limite depuis l'entrée utilisateur

    // Affichage des deux premiers termes de la suite
    printf("Fibonacci : %d %d ", a, b);

    // Boucle tant que le terme suivant reste inférieur ou égal à la limite
    while (1) {
        suivant = a + b;  // Génération du prochain nombre dans la suite

        if (suivant > limit)  // Si le terme suivant dépasse la borne, on sort de la boucle
            break;

        printf("%d ", suivant);  // Affichage du terme généré
        a = b;  // Décalage des valeurs : l'ancien b devient le nouveau a
        b = suivant;  // Le terme calculé devient le nouveau b
    }

    printf("\n");  // Ajout d’un retour à la ligne après l'affichage
    return 0;  // Fin du programme avec un code de retour standard
}
