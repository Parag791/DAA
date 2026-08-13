#include <stdio.h>

void binary(int n)
{
    if (n > 1)
        binary(n / 2);

    printf("%d", n % 2);
}

void printBinary16(int n)
{
    int bits[16];
    int i;

    for (i = 15; i >= 0; i--)
    {
        bits[i] = n % 2;
        n = n / 2;
    }

    for (i = 0; i < 16; i++)
        printf("%d", bits[i]);
}

int main()
{
    int a[] = {30, 75, 2564};
    int n = 3, i;

    for (i = 0; i < n; i++)
    {
        printf("The binary equivalent of %d is ", a[i]);
        printBinary16(a[i]);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>

void binary(int n)
{
    if (n > 1)
        binary(n / 2);

    printf("%d", n % 2);
}

void printBinary16(int n)
{
    int bits[16];
    int i;

    for (i = 15; i >= 0; i--)
    {
        bits[i] = n % 2;
        n = n / 2;
    }

    for (i = 0; i < 16; i++)
        printf("%d", bits[i]);
}

int main()
{
    int a[] = {30, 75, 2564};
    int n = 3, i;

    for (i = 0; i < n; i++)
    {
        printf("The binary equivalent of %d is ", a[i]);
        printBinary16(a[i]);
        printf("\n");
    }

    return 0;
}
