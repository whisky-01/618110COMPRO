#include <stdio.h>

int min(int num1, int num2, int num3, int num4, int num5)
{
    int min = num1;
    if (num2 < min)
    {
        min = num2;
    }
    if (num3 < min)
    {
        min = num3;
    }
    if (num4 < min)
    {
        min = num4;
    }
    if (num5 < min)
    {
        min = num5;
    }
    return min;
}

int max(int num1, int num2, int num3, int num4, int num5)
{
    int max = num1;
    if (num2 > max)
    {
        max = num2;
    }
    if (num3 > max)
    {
        max = num3;
    }
    if (num4 > max)
    {
        max = num4;
    }
    if (num5 > max)
    {
        max = num5;
    }
    return max;
}

int main()
{
    int num1, num2, num3, num4, num5;
    printf("Enter number #1 : ");
    scanf("%d", &num1);

    printf("Enter number #2 : ");
    scanf("%d", &num2);

    printf("Enter number #3 : ");
    scanf("%d", &num3);

    printf("Enter number #4 : ");
    scanf("%d", &num4);

    printf("Enter number #5 : ");
    scanf("%d", &num5);
    printf("Min = %d\n", min(num1, num2, num3, num4, num5));
    printf("Max = %d\n", max(num1, num2, num3, num4, num5));
}