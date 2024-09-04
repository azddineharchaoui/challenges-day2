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
    int max=t[0];
    for (int j=1; j<n; j++){
        if(max<t[j]){
            max=t[j];
        }
    }
    printf("le maximum des elements du tableau est %d\n", max );
    return 0;
}
