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
    for(int j=0; j<n%2; j++){
        int tmp=t[j];
        t[j]=t[n-1-j];
        t[n-1-j]=tmp;

    }
    for (int l=0; l<n; l++){
        printf("%d\n", t[l]);
    }
    return 0;
}
