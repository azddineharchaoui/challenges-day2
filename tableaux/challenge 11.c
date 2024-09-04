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
    int old;
    printf("entrez la valeur que vous voulez remplacer \n");
    scanf("%d", &old);
    int newv;
    printf("entrer la nouvelle valeur \n");
    scanf("%d", &newv);

    for(int j=0; j<n; j++){
        if(t[j]==old){
            t[j]=newv;
        }
    }

    for(int k=0; k<n; k++){
        printf("%d\n", t[k]);
    }
    return 0;
}
