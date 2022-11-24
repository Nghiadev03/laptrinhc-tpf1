#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s[100];
	gets(s);
	while (s[i]!='\0'){
		i++;
	}
	printf("Do dai chuoi la= %d",i);
	return 0;
}
