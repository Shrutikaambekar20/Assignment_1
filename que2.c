/*2.Write a program to accept a number and print the number in character, decimal, octal and hex
formats.*/
#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Character: %c\n", num);

    printf("Decimal: %d\n", num);

    printf("Octal: %o\n", num);

    printf("Hexadecimal: %x\n", num);

    return 0;
}





