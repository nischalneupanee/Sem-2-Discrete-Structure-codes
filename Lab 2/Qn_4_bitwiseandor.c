//Write a C program to perform bitwise AND and OR operations on two given integers and display the results in both binary and decimal formats.
#include <stdio.h>

void BitwiseAND(int a, int b)
{
    printf("\n Bitwise AND:\n");
    printf("Binary: %d & %d = %d\n", a, b, a & b);
    printf("Decimal: %d & %d = %d\n", a, b, a & b);
}

void BitwiseOR(int a, int b)
{
    printf("\n Bitwise OR:\n");
    printf("Binary: %d | %d = %d\n", a, b, a | b);
    printf("Decimal: %d | %d = %d\n", a, b, a | b);
}

int main()
{
    int a = 5, b = 3;

    BitwiseAND(a, b);
    BitwiseOR(a, b);
}
