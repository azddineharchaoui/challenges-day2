#include <stdio.h>

int min( int a , int b){
    if(a<b){
            return a;
    }else{
             return b;
    }
}

int main(){
    int num1, num2;
    printf("entrer deux entiers\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    printf("min(%d ,%d) = %d", num1, num2, min(num1, num2));
    return 0;
}
