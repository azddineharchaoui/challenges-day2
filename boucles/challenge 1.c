#include <stdio.h>

int main(){
    int n;
    printf("entrer un nombre entier\n");
    scanf("%d", &n);
    for (int i=10; i>0; i--){
        printf("%d * %d = %d\n", n, i, n*i);
    }
    return 0;
}
