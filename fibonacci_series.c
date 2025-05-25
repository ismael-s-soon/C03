#include <stdio.h> // Inclut la bibliothèque standard pour les fonctions d'entrée/sortie (printf, scanf)

int main() {
    int limit, a = 0, b = 1, suivant; 
    // limit : borne maximale entrée par l'utilisateur
    // a et b : les deux premiers termes de la suite de Fibonacci (0 et 1)
    // suivant : stocke temporairement le prochain terme calculé

    scanf("%d", &limit); 
    // scanf : lit un entier entré au clavier
    // "%d" : format pour lire un entier décimal
    // &limit : adresse mémoire où stocker l’entier lu

    printf("Fibonacci : %d %d ", a, b); 
    // printf : affiche du texte et des variables
    // "Fibonacci : " : texte affiché tel quel
    // %d : insère la valeur de a et b dans l’ordre (0 1)

    while (1) { 
        // while(1) : boucle infinie (répète sans fin sauf si on interrompt)
        
        suivant = a + b; 
        // Calcule le terme suivant de la suite
        // C’est la somme des deux précédents

        if (suivant > limit) break; 
        // Si le terme dépasse la limite entrée, on arrête la boucle

        printf("%d ", suivant); 
        // Affiche le terme courant de la suite avec un espace

        a = b; 
        // Décale b vers a : le deuxième devient le premier
        b = suivant; 
        // Le terme suivant devient le nouveau b pour l’itération suivante
    }

    printf("\n"); 
    // Affiche un retour à la ligne après la suite

    return 0; 
    // Indique que le programme s’est terminé avec succès
}
