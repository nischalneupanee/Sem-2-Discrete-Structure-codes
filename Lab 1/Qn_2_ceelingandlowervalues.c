//WAP in C to find celling and floor values.
#include<stdio.h>

void floor1(float value)
{
    int result = (int)value;
    printf("The floor value is %d\n", result);
}

void celling(float value)
{
    int result = (int)value;
    if (value > result) {
        result++;
    }
    printf("The celling value is %d\n", result);
}

int main()
{
    float value;
    printf("Enter the number: ");
    scanf("%f", &value);
    floor1(value);
    celling(value);
    return 0;
}