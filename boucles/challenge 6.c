#include <stdio.h>

int main(){
    int n ;
    printf("entrer un nombre entier  \n");
    scanf("%d",&n);
    printf("les facteurs de %d sont : \n", n);
    for(int i=1; i<n+1 ; i++){
        if(n%i==0){
            printf("%d ", i);
        }
    }
    return 0;
}
