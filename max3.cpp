#include <stdio.h>

int main()
{
    int a, b, c;
    int max;

    printf("value of a: ");
    scanf("%d", a);
    printf("value of b: ");
    scanf("%d", b);
    printf("value of c: ");
    scanf("%d", c);

    max = a;

    if (b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }

    printf("max value is ", max);
}


