/*8. Write a program to accept three integer numbers and find its average.*/
#include<stdio.h>
int main()
{
	int a,b,c,sum;
	float avg;
	printf("Enter 1st  number :\n");
	scanf("%d",&a);
	
	printf("Enter 2nd  number :\n");
	scanf("%d",&b);

	printf("Enter 3rd  number :\n");
	scanf("%d",&c);

	sum=a+b+c;
	printf("sum :%d\n",sum);
	avg=(sum/3.0);
	printf("AVerage :%f\n",avg);

	return 0;
}
