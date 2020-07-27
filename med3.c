#include <stdio.h>

int med3(int a, int b, int c)
{
    if (a >= b)
    {
        if (b >= c)
        {
            return b;
        }
        else if (a <= c)
        {
            return a;
        }
        else
        {
            return c;
        }
    }
    else if (a > c)
    {
        return a;
    }
    else if (b > c)
    {
        return c;
    }
    else
    {
        return b;
    }
}

int main()
{
    int a, b, c;

    printf("Enter value a: ");
    scanf("%d", &a);
    printf("Enter value b: ");
    scanf("%d", &b);
    printf("Enter value c: ");
    scanf("%d", &c);

    int result = med3(a, b, c);

    printf("Med value is %d", result);
}