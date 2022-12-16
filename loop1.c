#include <stdio.h>

int main(){
    int num=1,N;
    printf("Enter the number N: ");
    scanf("%d", &N);
    do {
        (num % 2)? printf("%d\n", num):0;
        num++;
    }while(num <=N);
}