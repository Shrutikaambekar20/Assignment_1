/*9. Write a program to convert temperature in Celsius to Fahrenheit and vice versa. */
#include<stdio.h>
int main()
{
	float celsius,fahrenheit;

	printf("\n Enter the Temparature in Celsius : ");
	scanf("%f",&celsius);

	fahrenheit = (1.8 * celsius) + 32;
	printf("\n Temperature in Fahrenheit : %.2f ",fahrenheit);

	printf("\n Enter the Temparature in fahrenheit : ");
    scanf("%f",&fahrenheit);

	celsius = (fahrenheit-32) / 1.8;
    printf("\n Temperature in Celsius : %.2f ", celsius);
 }
