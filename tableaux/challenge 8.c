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
    int m[n];
    for(int j=0; j<n; j++){
        m[j]=t[j];
    }
    for (int l=0; l<n; l++){
        printf("%d\t%d\n", t[l], m[l]);
    }
    return 0;
}
