#include <stdio.h>  // Bibliothèque standard utilisée pour les fonctions d'entrée et de sortie

int main() {
    int nombre;       // Sert à enregistrer le nombre donné par l'utilisateur
    int compteur = 0; // Sert à compter combien de chiffres contient le nombre

    scanf("%d", &nombre);  // Récupération du nombre entré au clavier

    int copie = nombre;  // Stockage du nombre original pour pouvoir l'afficher ensuite

    // Cas particulier : 0 est considéré comme ayant un seul chiffre
    if (nombre == 0) {
        compteur = 1;
    } else {
        // On divise successivement par 10 pour extraire les chiffres un à un
        while (nombre != 0) {
            nombre /= 10;   // Retire un chiffre en fin de nombre
            compteur++;     // Augmente le total de chiffres trouvés
        }
    }

    // Affichage du résultat final
    printf("%d contient %d chiffre(s).\n", copie, compteur);

    return 0;  // Indique que le programme s’est terminé correctement
}
