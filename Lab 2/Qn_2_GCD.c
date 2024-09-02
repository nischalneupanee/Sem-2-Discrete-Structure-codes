//Write a C program to find the greatest common divisor (GCD) of two integers using the Euclidean algorithm.(print in a table format)

#include <stdio.h>
#include <stdlib.h>



void print_euclidean_algorithm(int a, int b)
{
    if(b>a)
    {
        int temp = a;
        a=b;
        b=temp;
    }
    int q, r;
    printf("q\ta\tb\tr\n");
    while (b != 0)
    {
        q = a / b;
        r = a % b;
        printf("%d\t%d\t%d\t%d\n", q, a, b, r);
        a = b;
        b = r;
    }
    printf("GCD is %d\n", a);
}

int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    print_euclidean_algorithm(a, b);
    return 0;
}