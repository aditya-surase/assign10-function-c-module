#include <stdio.h>

void convertTime(int m);

int main()
{
    int m;
    printf("Enter the value of minutes: ");
    scanf("%d", &m);
    convertTime(m);
    return 0;
}

void convertTime(int m)
{
    printf("Hours = %d Minutes = %d", m/60, m%60);
}