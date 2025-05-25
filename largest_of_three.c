#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int a, b, c; // Déclaration de trois variables entières a, b et c

    // Lecture de trois nombres entiers entrés par l'utilisateur
    scanf("%d %d %d", &a, &b, &c);

    // Vérifie si 'a' est plus grand ou égal à 'b' ET à 'c'
    if (a >= b && a >= c) {
        // Si c'est vrai, affiche que 'a' est le plus grand
        printf("Le plus grand nombre est : %d\n", a);
    } 
    // Sinon, vérifie si 'b' est plus grand ou égal à 'a' ET à 'c'
    else if (b >= a && b >= c) {
        // Si c'est vrai, affiche que 'b' est le plus grand
        printf("Le plus grand nombre est : %d\n", b);
    } 
    // Si ni 'a' ni 'b' ne sont les plus grands, alors 'c' est le plus grand
    else {
        printf("Le plus grand nombre est : %d\n", c);
    }

    return 0; // Fin du programme
}
