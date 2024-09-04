#include <stdio.h>

void triABulle(int *t, int n){
    int tmp;
    for (int i=0; i<n-1; i++){
        for(int j =0 ; j<n-1-i; j++){
            if(t[j]>t[j+1]){
                tmp=t[j];
                t[j]=t[j+1];
                t[j+1]=tmp;
            }
        }
    }
}
int main()
{
    int n;
    printf("entrez le nombre d\'element du tableau\n");
    scanf("%d",&n);
    int t[n];
    printf("entrer les elements du tableau a trier un par un \n");
    for(int i=0; i<n; i++){
        scanf("%d", &t[i]);
    }
    triABulle(t,n);
    printf("Tableau trie :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    return 0;
}
