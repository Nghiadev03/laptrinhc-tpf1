#include<stdio.h>
#include<string.h>
int main (){
	char c;
  char (s)[100];
	printf("enter string::");
	gets(s);
	printf("before reverse: %s",s);
	printf("\nafter reverse:%s ",strrev(s));
	printf("\npress esc to quit, enter to continue:");
	c=getch();
	if(c==13){
	continue;
}
	if(c==27){
	break;
}
	return 0;
}
