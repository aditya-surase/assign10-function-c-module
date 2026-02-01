#include <stdio.h>

void perimeter(int l, int w);

int main()
{
    int l, w;
    printf("Enter the value of length and width: ");
    scanf("%d%d", &l, &w);
    perimeter(l, w);
    return 0;
}

void perimeter(int l, int w)
{
    printf("Perimeter = %d", 2*(l+w));
}