#include <stdio.h>
int gcd(int aa, int b)
{
    if (a == 0 || b == 0)
       return 0;
    if (aa == b)
        return aa;
    if (aa > b)
        return gcd(aa-b, b);
    return gcd(aa, b-aa);
}
int main()
{
    int aa = 98, b = 56;
    printf("GCD of %d and %d is %d ", aa, b, gcd(aa, b));
    return 0;
}
