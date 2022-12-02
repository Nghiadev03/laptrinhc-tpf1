#include<stdio.h>
int main()
{
	float a,b,c;
	int sum;
	printf("Nhap vao 3 mon toan ly hoa\n", a,b,c);
	scanf("%f%f%f", &a, &b, &c);
	sum=a+b+c;
	printf("Tong=%d", sum);
	if(sum>=15 &&a>4,b>4 ,c>4){
		printf("\nKet Qua Dau");
	}
	else(10>=a>=6||10>=b>=6||10>=c>=6){
		printf("\nHoc deu cac mon");
	}else if(sum>=15 &&a<=4 &&b<=4 &&10>=c>=6){
		printf("\nhoc ko deu cac mon");
	}else{
		printf("\nthi hong",sum);
	}
	
	return 0;
}
