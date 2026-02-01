#include <stdio.h>

void add(int a, int b);   // declaration

int main()
{
    int a, b;
    printf("enter a and b:");
    scanf("%d%d", &a, &b);
    add(a, b);            // call
    return 0;
}

void add(int a, int b)    // definition
{
    printf("Sum = %d", a + b);
}