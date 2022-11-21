#include <stdio.h>
 
int main() {
   char s1[100];
   gets(s1) ;
   int i = 0;
     
   // su dung vong lap while tinh do dai cua chuoi
   // '\0' la ky tu NULL ket thuc cua mot chuoi
   while(s1[i] != '\0') {
      i++;
   }
    
   printf("Do dai cua chuoi '%s' la: %d", s1, i);
    
   return 0;
}
