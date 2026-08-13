#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;

    return gcd(b, a % b);
}

int main()
{
    printf("The GCD of 8 and 12 is %d\n", gcd(8, 12));
    printf("The GCD of 20 and 45 is %d\n", gcd(20, 45));
    printf("The GCD of 30 and 80 is %d\n", gcd(30, 80));

    return 0;
}
