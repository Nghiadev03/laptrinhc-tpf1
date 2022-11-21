//bai1;
//#include<stdio.h>
//int main(){
//int a=5 ;int b=9;
//int *ptr1,*ptr2;
//ptr1=&a;
//ptr2=&b;
//int num;
//num=*ptr1+*ptr2;
//printf("tong 2 gia tri a va b la:%d",num);
//return 0;
//	
//}
//bai2;
//#include<stdio.h>
//	void swap(int *num1,int *num2){
//	int temp;
//	temp=*num1;
//	*num1=*num2;
//	*num2=temp;;
//}
//	int main(){
//	int num1,num2;
//	printf("nhap so dau tien:");
//	scanf("%d",&num1);
//	printf("nhap so thu hai:");
//	scanf("%d",&num2);
//	swap(&num1,&num2);
//	printf("\nsau khi hoan doi..");
//	printf("\nso thu nhat :%d",num1);
//	printf("\nso thu hai: %d",num2);
//	return 0;
//}
bai5;
#include<stdio.h>
#include<conio.h>
#define MAX 30
 int main(){
 	int size,i,arr[max];
 	int *ptr;
 	ptr=&arr[0];
 	printf("\nnhap kich co mang:");
 	scanf("%d",&size);
 	printf("\nnhap %d so nguyen vao trong mang:",size);
 	for(i=0;i<size,i++){
 		scanf("%d",ptr);
 		ptr++;
	 }
	 ptr=&arr[size-1];
	 printf("\n Hien thi cac phan tu theo chieu dao nguoc:");
	 for(i=size-1;i>=0;i--){
	 	printf("\nPhan tu %d la:%d",i,*ptr);
	 	ptr--;
	 }
	 return 0;
 }
 
 
 
 
 
////bai3;
////Chuong trình C de tính tong giá tri các phan tu trong mang boi su dung con tro
//#include<stdio.h>
//int main(){
//	int i;
//int arr[]={3,5,6,8,9};
//for(i=0;i<5;i++)
//printf("Tong gia tri cac phan tu la:%d",*(arr[]+i));
//}


	



