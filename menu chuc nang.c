#include<stdio.h>
#include<math.h>
int kiemtrasnt(int n)
{
int j, flag = 0;
for (j = 2; j <= n / 2; ++j) {
if (n % j == 0) {
flag = 1;
break;
}
}
return flag;
} //kiem tra so nguyen so giua 2 khoang
int reverse_num(int n){
int reverse = 0;
while (n > 0) {
reverse = reverse * 10 + n % 10;
n /= 10;
}
return reverse;
}
int symmetrical_num(int n){
// flag = 1 => so doi xung
// flag = 0 => không phai so doi xung

int flag =0;
if (reverse_num(n) == n) flag = 1;
return flag;
}
int checkPrime(int n) {
int i, isPrime = 1;
for (i = 2; i <= n / 2; ++i) {
if (n % i == 0) {
isPrime = 0;
break;
}
}
return isPrime;
} //Kiem tra xem mot so có the duoc bieu thi bang tong cua hai so nguyên to không.
int tinhgiaithua(int i)
{
   if(i <= 1)
   {
      return 1;
   }
   return i * tinhgiaithua(i - 1);
}
int luachon;
 while(luachon!=5)
printf("\\n---------MENU---------");
    printf("\\n1. hien thi snt giua 2 khoang!");
    printf("\\n2. Kiem tra so doi xung!");
    printf("\\n3. kiem tra mot so hien thi la tong cua 2 snt!");
    printf("\\n4. giai thua!");
    printf("\\n5. Quit!");
    printf("\\nLua chon: ");
    scanf("%d", &luachon);
    switch (luachon)
    {
	case 1 :
	{
	int n1, n2, i, flag;
printf("Enter two positive integers: ");
scanf("%d %d", &n1, &n2);
printf("Prime numbers between %d and %d are: ", n1, n2);
for (i = n1 + 1; i < n2; ++i) {
// gan bien flag cho hàm kiem tra
flag = checkPrimeNumber(i);
if (flag == 0)
printf("%d ", i);
}
return 0;
}
    case 2 :
    {
    int n;
    printf("Nhap so tu nhien= ");
scanf("%d",&n);

int check = symmetrical_num(n);

if( check == 1 ) printf("%d la so doi xung\\n", n);
else printf("%d khong phai la so doi xung\\n", n);
return 0;

	}
	case 3:
{
int n, i, flag = 0;
printf("Enter a positive integer: ");
scanf("%d", &n);
for (i = 2; i <= n / 2; ++i) {
if (checkPrime(i) == 1) {
if (checkPrime(n - i) == 1) {
printf("%d = %d + %d\n", n, i, n - i);
flag = 1;
}
}
}
if (flag == 0)
printf("%d cannot be expressed as the sum of two prime numbers.", n);
return 0;
}
	case 4:
{
int  main()
{
    int i = 10;
    printf("Gia tri giai thua cua %d la %d\n", i, tinhgiaithua(i));
    return 0;
}
}
case 5:
{ 
break;
}
default:
	{
		printf( "lua chon khong hop le !");
	}
	}
		
