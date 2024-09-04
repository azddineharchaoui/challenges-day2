#include <stdio.h>

int recherchedicho(int * t, int n, int search){
    int debut = 0;
    int fin = n-1;
    while(debut<=fin){
        int milieu = (debut + fin )/2;
        if(t[milieu]==search){
            return milieu;
        }else if(t[milieu]>search){
            fin = milieu -1;
        }else {debut = milieu +1; }

    }
    return -1;
}

int main()
{
    int n;
    printf("entrez le nombre d\'element du tableau\n");
    scanf("%d",&n);
    int t[n];
    printf("entrer les elements du tableau trie un par un \n");
    for(int i=0; i<n; i++){
        scanf("%d", &t[i]);
    }

    int elt;
    printf("entrez l'entier que vous recherchez \n");
    scanf("%d", &elt);
    int indice = recherchedicho(t, n, elt);
    if (indice !=-1){
        printf("l'element est trouve a l'indice %d", indice);
    }else {
        printf("l'element n'est pas dans le tableau\n");
    }
    return 0;
}
