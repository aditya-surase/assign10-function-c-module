#include <stdio.h>

void areaTriangle(float b, float h);

int main()
{
    float b, h;
    printf("Enter the value of base and height: ");
    scanf("%f%f", &b, &h);
    areaTriangle(b, h);
    return 0;
}

void areaTriangle(float b, float h)
{
    printf("Area = %.2f", 0.5*b*h);
}