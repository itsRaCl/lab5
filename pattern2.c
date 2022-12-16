#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int i=1; i<=n;i++){
        for (int j=0; j<n-i;j++){
            printf(" ");
        }
        for (int j=i; j<=2*i-1;j++){
            printf("%d", j);
        }
        for (int j=2*i-2; j>=i;j--){
            printf("%d", j);
        }
        printf("\n");
    }
}