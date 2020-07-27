#include <stdio.h>

int min3(int a, int b, int c)
{
    int min = a;

    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }

    return min;
}

int main()
{
    int a, b, c;

    printf("Enter value a:");
    scanf("%d", &a);
    printf("Enter value b:");
    scanf("%d", &b);
    printf("Enter value c:");
    scanf("%d", &c);

    int result = min3(a, b, c);

    printf("Min value is %d", result);
}