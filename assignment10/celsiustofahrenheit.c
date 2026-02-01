#include <stdio.h>

void convert(float c);

int main()
{
    float c;
    printf("Enter the value of Celsius: ");
    scanf("%f", &c);
    convert(c);
    return 0;
}

void convert(float c)
{
    float f = (c * 9 / 5) + 32;
    printf("Fahrenheit = %.2f", f);
}