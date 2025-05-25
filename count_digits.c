#include <stdio.h>  // Inclusion de la bibliothèque standard pour utiliser printf et scanf

int main() {  // Début de la fonction principale

    int nombre;       // Déclaration de la variable "nombre" qui contiendra la valeur entrée par l'utilisateur
    int compteur = 0; // Initialisation de la variable "compteur" à 0, elle servira à compter les chiffres

    scanf("%d", &nombre);  // Lecture d’un entier depuis le clavier et stockage dans "nombre"

    int copie = nombre;  // Création d'une copie du nombre d’origine, pour ne pas perdre sa valeur pendant le traitement

    // Cas particulier : si l'utilisateur entre 0, on considère que ce nombre a 1 seul chiffre
    if (nombre == 0) {
        compteur = 1;  // Le compteur devient 1 car "0" est un chiffre
    } else {
        // Si le nombre est différent de 0, on entre dans cette boucle pour compter les chiffres
        while (nombre != 0) {      // Tant qu’il reste des chiffres dans "nombre"
            nombre /= 10;         // On divise "nombre" par 10 : cela retire le dernier chiffre
            compteur++;           // On ajoute 1 au compteur pour chaque chiffre retiré
        }
    }

    // Affiche le nombre original et le nombre de chiffres qu’il contient
    printf("%d contient %d chiffre(s).\n", copie, compteur);

    return 0;  // Le programme termine correctement en renvoyant 0 au système
}
