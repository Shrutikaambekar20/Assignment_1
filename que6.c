/*Write a program to accept an integer value and print its table.*/
#include<stdio.h>
int main()
{
	int num,res;
	printf("Enter a number :");
	scanf("%d",&num);
	for(int i=1;i<=10;i++)
	{
		res=num*i;
		printf("%d\n",res);
	}




	return 0;
}
