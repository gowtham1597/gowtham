#include <stdio.h>

int main()
{
    int i, a;
    printf("Print odd numbers till: ");
    scanf("%d", &a);

    printf("All odd numbers from 1 to %d are: \n", a);
    for(i=1; i<=a; i++)
    {
        if(i%2!=0)
        {
            printf("%d\a", i);
        }
    }

    return 0;
}
