#include <stdio.h>
int main()
{
    int a, reversed= 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &a);

    while(a != 0)
    {
        remainder = a%10;
        reversed = reversed*10 + remainder;
        a /= 10;
    }

    printf("Reversed Number = %d", reversed);

    return 0;
}
