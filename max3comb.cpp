#include <stdio.h>

// int max3(int a, int b, int c)
// {
//     int max = a;
//     if (b > max)
//     {
//         max = b;
//     }
//     if (c > max)
//     {
//         max = c;
//     }
//     return max;
// }

// int main()
// {
//     int result = max3(3, 1, 2);

//     printf("max value is %d", result);
// }

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

    printf("value of a: ");
    scanf("%d", &a);
    printf("value of b: ");
    scanf("%d", &b);
    printf("value of c: ");
    scanf("%d", &c);
    printf("value of d: ");
    scanf("%d", &d);

    int result = max4(a, b, c, d);

    printf("max value is %d", result);
    return 0;
}