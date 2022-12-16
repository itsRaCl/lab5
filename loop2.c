#include <stdio.h>

int main(){
    int num=1,N;
    printf("Enter the number N: ");
    scanf("%d", &N);
    for (num; num <=N;num++){
        (num % 2)? printf("%d\n", num):0;
    }
}