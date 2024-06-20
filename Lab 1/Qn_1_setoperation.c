// Write a program in c programming ot implement base set operation: UNION, INTERSECTION & DIFFERENT
#include <stdio.h>

int main()
{
    int a, b, flag;
    printf("Enter the sizes of array a and b:");
    scanf("%d%d", &a, &b);

    int arr1[a], arr2[b], arr3[100];

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

    // UNION
    int k = 0;
    for (int i = 0; i < a; i++)
    {
        arr3[i] = arr1[i];
        k++;
    }

    for (int i = 0; i < b; i++)
    {
        flag = 0;
        for (int j = 0; j < a; j++)
        {
            if (arr2[i] == arr1[j])
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            arr3[k] = arr2[i];
            k++;
        }
    }
    printf("A union B\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    // INTERSECTION
    k = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; i++)
        {
            if (arr1[i] == arr2[j])
            {
                arr3[k] = arr1[i];
                k++;
                break;
            }
        }
    }
    printf("\nA intersection B\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }

    // Difference
    k = 0;
    for (int i = 0; i < a; i++)
    {
        flag = 0;
        for (int j = 0; j < b; i++)
        {
            if (arr1[i] == arr2[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            arr3[k] = arr1[i];
            k++;
        }
    }
    printf("\nA difference B\n");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", arr3[i]);
    }
}