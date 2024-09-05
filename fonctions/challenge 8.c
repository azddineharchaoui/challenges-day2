#include <stdio.h>

int estPair(int a){
    return a%2==0;
}

int main(){
    int n;
    printf("entrez un entier \n");
    scanf("%d", &n);
    if(estPair(n))  printf("l'entier %d est pair \n", n);
    else printf("l'entier %d est impair \n",n);

    return 0;

}
