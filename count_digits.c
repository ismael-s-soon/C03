#include <stdio.h>  // Inclusion de la bibliothèque standard pour scanf et printf

int main() {  // Début de la fonction principale

    int n, c = 0, copie;  // Déclaration de :
                          // n : le nombre entré par l'utilisateur
                          // c : compteur de chiffres, initialisé à 0
                          // copie : une copie du nombre original pour l'affichage final

    scanf("%d", &n);      // Lecture d’un entier depuis le clavier et stockage dans n

    copie = n;            // On garde une copie de n avant modification pour l'afficher à la fin

    if (n == 0)           // Si le nombre est 0, cas particulier :
        c = 1;            // on considère qu’il a un seul chiffre

    else                 // Sinon, on entre dans une boucle pour compter les chiffres
        while (n) {      // Tant que n est différent de 0
            n /= 10;     // On enlève le dernier chiffre (division entière par 10)
            c++;         // On incrémente le compteur
        }

    // Affiche le nombre original (copie) et le nombre de chiffres (c)
    printf("%d contient %d chiffre(s).\n", copie, c);

    return 0;  // Fin normale du programme
}
