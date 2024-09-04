#include <stdio.h>

int main(){
    int base, exp;
    printf("entrez une base positive\n");
    scanf("%d", &base);

    printf("entrez un exposant positif\n");
    scanf("%d", &exp);
    printf("%d^%d = ", base, exp);

    int pow=1;
    while(exp>0){
        pow*=base;
        exp--;
    }
    printf("%d", pow);
    return 0;
}
