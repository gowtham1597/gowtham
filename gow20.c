#include <stdio.h>
int main()
{
    int a, i;

    printf("Enter an integer: ");
    scanf("%d",&a);

    for(i=1; i<=2; ++i)
    {
        printf("%d * %d = %d \n", a, i, a*i);
    }
    
    return 0;
}
