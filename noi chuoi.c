#include<stdio.h>
#include<string.h>
int main(){
	char str1[100];
	char str2[100];
	char str3[100];
	int len;
	printf("nhap chuoi 1:");
	gets(str1);
	
	printf("nhap chuoi 2:");
	gets(str2);
	
	strcpy(str3,str1);
	strcat(str3,str2);
	
	printf("Noi 2 cau lenh la:%s",str3);
	return 0;
	
}
