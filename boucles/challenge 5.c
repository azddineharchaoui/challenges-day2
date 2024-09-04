#include <stdio.h>

int main(){
    int n ;
    printf("entrer un nombre entier  \n");
    scanf("%d",&n);

    int sum = 0 ;
    for(int i=0; i<n; i++){
        sum+=i+1;
    }
    printf("la somme des entiers entre 1 et %d est %d",n, sum );
    return 0;
}
