#include<stdio.h>
int main (){
	char c;
	printf("nhap 1 ki tu	:");
	scanf("%c",&c);
	if (c>='a'& c<='z'){
		c=c-32;
		printf("Chu hoa la :%c.\n",c);
		}
		else if(c>='A'&&c<='z'){
			c=c+32;
		printf("ki tu thuong la: %c.\n",c);
		}else if(c>='0'&&c<='9')
		printf ("ki tu ban vua nhap la so%c.\n",c);
		else
		printf("ban da nhap ki tu%c.\n",c);
		
	return 0;
	}
