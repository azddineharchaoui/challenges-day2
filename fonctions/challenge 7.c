#include <stdio.h>
#include <string.h>

void inverser(char *chaine) {
    int len = strlen(chaine);
    int debut = 0;
    int fin = len - 1;
    char temp;

    while (debut < fin) {
        temp = chaine[debut];
        chaine[debut] = chaine[fin];
        chaine[fin] = temp;
        debut++;
        fin--;
    }
}
int main(){
    char chaine[100];

    printf("Entrez une chaine de caracteres : ");
    fgets(chaine, sizeof(chaine), stdin);

    inverser(chaine);
    printf("%s", chaine);

    return 0;
}
