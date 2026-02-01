#include <stdio.h>

void result(int a,int b,int c,int d,int e);

int main()
{
    int a,b,c,d,e;
    printf("Enter marks of five subjects: ");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    result(a,b,c,d,e);
    return 0;
}

void result(int a,int b,int c,int d,int e)
{
    int total = a+b+c+d+e;
    float per = total/5.0;
    printf("Total = %d\nPercentage = %.2f", total, per);
}