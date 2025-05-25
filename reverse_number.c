#include <stdio.h> // #include : ajoute une bibliothèque
                   // <stdio.h> : standard I/O, pour scanf et printf

int main() { // int : type de retour, main : point de départ du programme
    int n, reversed = 0; 
    // n : nombre saisi par l'utilisateur
    // reversed : stocke le nombre inversé

    if (scanf("%d", &n) != 1) return 1; 
    // scanf : lit un entier au clavier
    // "%d" : format pour entier
    // &n : adresse où stocker l’entrée
    // != 1 : vérifie que la lecture a réussi
    // return 1 : sort du programme si erreur

    int original = n; 
    // Copie la valeur d'origine de n
    // original servira à savoir si le nombre est négatif

    if (n < 0) n = -n; 
    // Si le nombre est négatif, on le rend temporairement positif
    // pour faciliter l’inversion des chiffres

    while (n != 0) { 
    // Tant que n n’est pas égal à 0, continuer
        int digit = n % 10; 
        // digit : récupère le dernier chiffre (modulo 10)

        reversed = reversed * 10 + digit; 
        // Décale les chiffres déjà inversés à gauche (×10)
        // puis ajoute le nouveau chiffre à droite

        n /= 10; 
        // Supprime le dernier chiffre de n (division entière par 10)
    }

    if (original < 0) reversed = -reversed; 
    // Si le nombre original était négatif, on remet le signe moins au résultat

    printf("Nombre inversé : %d\n", reversed); 
    // Affiche le résultat final

    return 0; 
    // Fin normale du programme
}
