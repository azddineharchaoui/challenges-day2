#include <stdio.h>

int fact( int n){
    if(n==0){
        return 1;
    }else if(n==1){
        return 1;
    }else{
    return n*fact(n-1);
    }
}

int main(){
    int num;
    printf("entrer un entier\n");
    scanf("%d",&num);
    printf("%d! = %d", num, fact(num));
    return 0;
}
