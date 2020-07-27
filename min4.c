#include <stdio.h>

int min4(int a, int b, int c, int d)
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
    if (d < min)
    {
        min = d;
    }

    return min;
}

int main()
{
    int a, b, c, d;

    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);
    printf("Enter value c: ");
    scanf("%d", &c);
    printf("Enter value d: ");
    scanf("%d", &d);

    int result = min4(a, b, c, d);

    printf("Min value is %d", result);
}