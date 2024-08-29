//Write a C program to implement logical implication for two Boolean variables. The program should display the truth table for the implication operation.(print T and F instead of 0 and 1)

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b;
    printf("Truth Table for Implication\n");
    printf("A\tB\tA=>B\n");
    for (a = 0; a <= 1; a++)
    {
        for (b = 0; b <= 1; b++)
        {
            printf("%c\t%c\t%c\n", a == 1 ? 'T' : 'F', b == 1 ? 'T' : 'F', !(a) || b ? 'T' : 'F');
        }
    }
    return 0;
}