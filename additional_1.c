#include <stdio.h>
void add(int a, int b){
    printf("%d+%d=%d\n", a, b, a+b);
}

void sub(int a, int b){
    printf("%d+%d=%d\n", a, b, a-b);
}

void div(int a, int b){
    if (b!=0){
        printf("%d+%d=%d\n", a, b, a/b);
    }
    else{
        printf("Cannot divide by zero\n");
    }
}

void mul(int a, int b){
    printf("%d+%d=%d\n", a, b, a*b);
}

void mod(int a, int b){
    printf("%d+%d=%d\n", a, b, a%b);
}


int main(){
    int a,b;
    char ch;
    printf("Enter an operation (+ or - or / or * or %%): ");
    scanf("%c", &ch);

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    switch (ch){
        case 43: 
            add(a,b);
            break;
        case 45:
            sub(a,b);
            break;
        case 42:
            mul(a,b);
            break;
        case 47:
            div(a,b);
            break;
        case 37:
            mod(a,b);
            break;
        default:
            printf("Enter a valid symbol");
    }    

}