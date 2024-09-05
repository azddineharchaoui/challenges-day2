#include <stdio.h>

int somme( int a , int b){
    return a+b;
}

int main(){
    int num1, num2;
    printf("entrer deux entiers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("%d + %d = %d", num1, num2, somme(num1, num2));
    return 0;
}
