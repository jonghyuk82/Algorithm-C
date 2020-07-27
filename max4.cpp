#include <stdio.h>

int max4(int a, int b, int c, int d)
{
    int max = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    if (d > max)
    {
        max = d;
    }

    return max;
}

int main()
{
    int a, b, c, d;

    printf("Enter value a:");
    scanf("%d", &a);
    printf("Enter value b:");
    scanf("%d", &b);
    printf("Enter value c:");
    scanf("%d", &c);
    printf("Enter value d:");
    scanf("%d", &d);

    int result = max4(a, b, c, d);

    printf("Max value is %d", result);
}