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
    int min=t[0];
    for (int j=1; j<n; j++){
        if(min>t[j]){
            min=t[j];
        }
    }
    printf("le minimum des elements du tableau est %d\n", min );
    return 0;
}
