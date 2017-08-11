#include <stdio.h>
int main()
{
    int l, high, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &l, &high);

    printf("Prime numbers between %d and %d are: ", l, high);

    while (l < high)
    {
        flag = 0;

        for(i = 2; i <= low/2; ++i)
        {
            if(l % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", l);

        ++l;
    }

    return 0;
}
