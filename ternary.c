#include <stdio.h>

int main(){
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);
    (age>=18)?printf("Eligible to vote\n"):printf("Not Eligible to vote\n");
}