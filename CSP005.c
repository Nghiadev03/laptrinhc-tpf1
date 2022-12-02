#include<stdio.h>
int main(){
	int n,i; 
	do{
	printf(" Input number (1->9):");
	scanf("%d",&n);
printf ("\n==== multiplication table %d=======",n);
}while(n<1||n>9);
	for(i=1;i<=10;i++)
printf("\n%dx%d=%d\n ",n,i,n*i);
	return 0;
	}
