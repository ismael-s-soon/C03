#include <stdio.h>  // Inclusion de la bibliothèque standard pour utiliser scanf et printf

int main() {  // Début de la fonction principale

    float c;  // Déclaration d'une variable flottante "c" pour stocker la température en Celsius

    // Lecture de la valeur entrée par l'utilisateur dans "c"
    // scanf("%f", &c) lit un float ; si ça échoue, on quitte avec un code d'erreur (1)
    if (scanf("%f", &c) != 1) return 1;

    // Affichage de la conversion avec 1 chiffre après la virgule
    // "%.1f" : format pour afficher un float avec 1 décimale
    // c : température en Celsius
    // (c * 9 / 5) + 32 : formule de conversion Celsius -> Fahrenheit
    printf("%.1f°C équivaut à %.1f°F\n", c, (c * 9 / 5) + 32);

    return 0;  // Fin normale du programme, tout s’est bien passé
}
