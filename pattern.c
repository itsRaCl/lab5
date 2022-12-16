#include <stdio.h>

int main(){

int n;
printf("Enter number of lines:");
scanf("%d",&n);
for (int i=0;i<n;i++){
	if (i==0){
	for (int j=0;j<((2*n)-1);j++){
		printf("*");
	}
	printf("\n");}
	else if (0<i && i<n-1){
		for (int j=0; j<i;j++){
		printf(" ");
		}
		printf("*");
		for (int j=1;j<=(2*(n-i-1)-1);j++){
		printf(" ");
		}
		printf("*\n");
		
	}
	if (i==n-1){
	for (int j=0; j<i;j++){
		printf(" ");
	}
	printf("*\n");
	}
}
}