#include <stdio.h>
int main()
{
    int i, a, t1 = 0, t2 = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &a);

    printf("Fibonacci Series: ");

    for (i = 1; i <= a; ++i)
    {
        printf("%d, ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    return 0;
}
