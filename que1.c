/*Write a program to Accept two numbers and
a. find its sum.
b. find its difference.
c. find its product.
Test the program using different integral data type signed/unsigned char/int/long.
First test the result using small values. Then test the same program using large values.
Observe the results.*/
#include<stdio.h>

int main()
{
	int a,b,add,dif,pro;
	printf("Enter 1st no :");
	scanf("%d",&a);
	printf("Enter 2nd  no :");
	scanf("%d",&b);
	add=a+b;
	printf("Addition is =%d\n",add);

	dif=a-b;
	printf("difference is =%d\n",dif);

	pro=a*b;
	printf("Product is =%d\n",pro);

	return 0;
}
