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
    for(int j=0; j<n; j++){
        for(int k=0; k<n; k++){
            if(t[j]<t[k]){
                int tmp = t[j];
                t[j]=t[k];
                t[k]= tmp;
            }
        }
    }
    for (int l=0; l<n; l++){
        printf("%d\n", t[l]);
    }
    return 0;
}
