#include <stdio.h>

int max( int a , int b){
    if(a<b){
            return b;
    }else{
             return a;
    }
}

int main(){
    int num1, num2;
    printf("entrer deux entiers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("max(%d ,%d) = %d", num1, num2, max(num1, num2));
    return 0;
}
