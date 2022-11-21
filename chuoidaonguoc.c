#include<stdio.h>
#include<string.h>
int main ()
{
	char (s)[100];
	gets(s);
	printf("truoc khi doi nguoc: %s",s);
	printf("\nsau khi doi nguoc:%s ",strrev(s));
	return 0;
}
