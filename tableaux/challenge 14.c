#include <stdio.h>

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

    float sum = 0;
    float avg;
    for(int k=0; k<n; k++){
        sum+=t[k];
    }
    avg=sum/n;
    printf("la valeur moyen du tableu est %.2f\n", avg);
    return 0;
}
