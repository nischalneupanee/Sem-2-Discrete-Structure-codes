//WAP in C to find the cartesian product of two sets.
#include<stdio.h>

int main()
{
    int a, b, flag;
    printf("ENter the sizes of array a and b:");
    scanf("%d%d", &a, &b);

    int arr1[a], arr2[b];

    printf("Enter the value of arr1: ");
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the value of arr2: ");
    for (int i = 0; i < b; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("The cartesian products of two sets are:\n{");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("(%d,%d),",arr1[i],arr2[j]);
        }
        
    }
    printf("}");
    
}