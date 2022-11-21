#include<stdio.h>
float nhapmang(int ia[50],int in){
	int isum=0,i;
	do{
		printf("nhap so luong phan tu:");
		scanf("%d",&in);
	} while(in<=0||in>=50);
for ( i=0;i<=in;i++){
	printf("Nhap a[%d] =",i);
	scanf("%d",&ia[i]);
	isum=isum+ia[i];
}
return (float)isum/in;
}
int main(){
int ia[50];
int in;
float a;
 a = nhapmang(ia,in);
printf("\nTrung binh cong :%.2f\n",a);
 return 0;
}


