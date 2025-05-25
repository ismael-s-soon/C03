#include <stdio.h>  // Inclusion de la bibliothèque standard pour les opérations d'entrée/sortie (comme printf et scanf)

int main() {
    int limit;  // Variable pour stocker la borne maximale jusqu'où on veut générer la suite de Fibonacci
    int a = 0, b = 1, suivant;  // Initialisation : a et b sont les deux premiers termes de la suite, suivant servira à stocker le terme suivant

    scanf("%d", &limit);  // Lecture de la valeur limite entrée par l'utilisateur via le clavier

    // Affichage des deux premiers termes fixes de la suite de Fibonacci
    printf("Fibonacci : %d %d ", a, b);

    // Boucle infinie while(1), utilisée ici intentionnellement.
    // On l'utilise pour générer les termes de la suite jusqu'à dépasser la limite.
    // Elle sera interrompue manuellement avec "break" quand le prochain terme dépasse la limite.
    while (1) {
        suivant = a + b;  // Calcul du terme suivant de la suite en additionnant les deux précédents

        if (suivant > limit)  // Si ce terme dépasse la valeur limite donnée par l'utilisateur
            break;  // On sort de la boucle : plus de termes à afficher

        printf("%d ", suivant);  // Affichage du terme actuel de la suite

        // Mise à jour des variables pour continuer la suite :
        // Le deuxième terme (b) devient le premier (a),
        // et le terme calculé (suivant) devient le nouveau b
        a = b;
        b = suivant;
    }

    printf("\n");  // Ajout d’un retour à la ligne après avoir affiché la suite complète

    return 0;  // Fin du programme avec code de retour 0, indiquant que tout s'est bien passé
}
