#include <stdio.h>

int main()
{
    int n;
    printf("entrez le nombre d\'element du premier tableau\n");
    scanf("%d",&n);
    int t[n];
    printf("entrer les elements du premier tableau un par un \n");
    for(int i=0; i<n; i++){
        scanf("%d", &t[i]);
    }

    int m;
    printf("entrez le nombre d\'element du deuxieme tableau\n");
    scanf("%d",&m);
    int s[m];
    printf("entrer les elements du deuxieme tableau un par un \n");
    for(int j=0; j<m; j++){
        scanf("%d", &s[j]);
    }

    int r[n+m];
    for (int k=0;k<n;k++){
        r[k]=t[k];
    }
    for(int l=n; l<n+m; l++ ){
        r[l]=s[l-n];
    }
    for (int p=0; p<n+m; p++){
        printf("%d\n", r[p]);
    }
    return 0;
}
