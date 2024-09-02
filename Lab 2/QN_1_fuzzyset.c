// Write a C program to implement the union, intersection, and complement operations on two fuzzy sets represented as arrays.

#include <stdio.h>

void Union(float set1[], float set2[], int n)
{
    printf("\n Union :\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f\t", set1[i] > set2[i] ? set1[i] : set2[i]);
    }
    printf("\n");
}

void Intersection(float set1[], float set2[], int n)
{
    printf("\n Intersection:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f\t", set1[i] < set2[i] ? set1[i] : set2[i]);
    }
    printf("\n");
}

void Complement(float set1[], float set2[], int n)
{
    printf("\n Complement set 1:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f\t", 1 - set1[i]);
    }
    printf("\n");
    printf("\n Complement set 2:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%f\t", 1 - set2[i]);
    }
    printf("/n");
}

int main()
{
    int n = 5;
    float set1[] = {0.1, 0.5, 0.8, 0.4, 0.6};
    float set2[] = {0.7, 0.4, 0.3, 0.8, 0.7};

    Union(set1,set2,n);
    Intersection(set1,set2,n);
    Complement(set1,set2,n);
}