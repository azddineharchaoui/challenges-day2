#include <stdio.h>

int main(){
    int count =0;
    float sum =0;
    int num = 0;
    printf("entrer une serie de nombre\n");
    while(1){
        scanf("%d", &num);
        if (num ==0 ){break;}

        sum+=num;
        count++;
    }
    float avg = sum /count;
    printf("la moyenne de la serie est %.2f",avg );
}
