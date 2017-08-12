#include <stdio.h>
int main()
{
    int a1, a2;
    
    printf("Enter two positive integers: ");
    scanf("%d %d",&a1,&a2);

    while(a1!=a2)
    {
        if(a1 > a2)
            a1 -= a2;
        else
            a2 -= a1;
    }
    printf("GCD = %d",a1);

    return 0;
}
