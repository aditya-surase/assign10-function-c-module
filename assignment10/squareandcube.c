#include <stdio.h>

void squareCube(int n);

int main()
{
    int n;
    printf("Enter the value of number: ");
    scanf("%d", &n);
    squareCube(n);
    return 0;
}

void squareCube(int n)
{
    printf("Square = %d\nCube = %d", n*n, n*n*n);
}