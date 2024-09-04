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

    printf("les elements pairs de ce tableau sont : \n");
    for(int k=0; k<n; k++){
        if(t[k]%2==0){
            printf("%d\n", t[k]);
        }
    }
    return 0;
}
