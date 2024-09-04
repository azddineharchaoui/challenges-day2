#include <stdio.h>
int rechercher(int *t, int n, int search){
    for(int j=0; j<n; j++){
        if(t[j]==search){
            printf("l\'element est present dans le tableau dans l\'indice %d\n", j);
            return j;
        }
    }
    printf("l\'element n\'existe pas dans le tableau \n");
    return -1;
}
int main()
{
    int n;
    printf("entrez le nombre d\'element du tableau\n");
    scanf("%d",&n);
    int t[n];
    printf("entrer les elements du tableau un par un \n");
    for(int i=0; i<n; i++){
        scanf("%d", &t[i]);
    }
    int search;
    printf("entrez l\'element que vous recherchez\n");
    scanf("%d", &search);

    rechercher(t, n, search);
    return 0;
}
