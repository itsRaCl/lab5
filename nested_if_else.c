#include <stdio.h>

int main(){
    int n1, n2,n3,n4;
    printf("Enter the first number: ");
    scanf("%d", &n1);
    printf("Enter the second number: ");
    scanf("%d", &n2);
    printf("Enter the third number: ");
    scanf("%d", &n3);
    printf("Enter the fourth number: ");
    scanf("%d", &n4);

    int s1 = n1+ n2;
    int s2 = n1+n3;
    int s3 = n1+n4;
    int s4 = n2+n3;
    int s5 = n2+n4;
    int s6 = n3+ n4;

    int max = s1;
    if (s2>max) max = s2;
    if (s3>max) max = s3;
    if (s4>max) max = s4;
    if (s5>max) max = s5;
    if (s6>max) max = s6;

    if (max == s1) printf("%d + %d = %d", n1,n2,s1);
    if (max == s2) printf("%d + %d = %d", n1,n3,s2);
    if (max == s3) printf("%d + %d = %d", n1,n4,s3);
    if (max == s4) printf("%d + %d = %d", n2,n3,s4);
    if (max == s5) printf("%d + %d = %d", n2,n4,s5);
    if (max == s6) printf("%d + %d = %d", n3,n4,s6);
}