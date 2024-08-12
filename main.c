#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char Lettre;
    int nbLignes;
    int count = 0;

    /*printf("Donner la lettre majuscule dont on doit chercher le nombre d'apparitions dans le texte : ");
    scanf(" %c", &Lettre);
    if (Lettre >= 'a' && Lettre <= 'z'){
        Lettre = Lettre - 'a' + 'A';
    }*/

    do {
        printf("Donner la lettre dont on doit chercher le nombre d'apparitions dans le texte : ");
        scanf(" %c", &Lettre);

        if (Lettre >= 'a' && Lettre <= 'z') {
            Lettre = Lettre - 'a' + 'A';
            printf("La lettre a ete convertie en majuscule : %c\n", Lettre);
        }
        if (Lettre < 'A' || Lettre > 'Z') {
            printf("Erreur : Veuillez entrer une lettre majuscule valide.\n");
        }
    } while (Lettre < 'A' || Lettre > 'Z');

    printf("Donner le nombre de lignes du texte : ");
    scanf("%d", &nbLignes);

    getchar();

    char Texte[nbLignes][1000];

    printf("Veuillez saisir le texte : \n");
    for (int i = 0; i < nbLignes; i++) {
        fgets(Texte[i], sizeof(Texte[i]), stdin);
    }

    for (int j = 0; j < nbLignes; j++) {
        for (int k = 0; k < strlen(Texte[j]) ; k++) {
            if (Texte[j][k] == Lettre) {
                count++;
            }
        }
    }

    printf("Le nombre d'apparitions de la lettre au sein du texte : %d\n", count);
    return 0;
}
