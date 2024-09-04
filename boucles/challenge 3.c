#include <stdio.h>
int estPremier(int n){
    for(int i =2; i<n-1; i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n ;
    printf("entrer un nombre entier  \n");
    scanf("%d",&n);
    if(n==2) {printf("2");}
    else{
    for (int i=2; i<n; i++){
        if(estPremier(i)){
            printf("%d\n", i);
        }
    }
    }
    return 0;
}
