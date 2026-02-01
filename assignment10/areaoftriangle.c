#include <stdio.h>

void areaCircle(float r);

int main()
{
    float r;
    printf("Enter the value of radius: ");
    scanf("%f", &r);
    areaCircle(r);
    return 0;
}

void areaCircle(float r)
{
    printf("Area of circle = %.2f", 3.14 * r * r);
}