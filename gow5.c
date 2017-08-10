#include <stdio.h>
int main()
{
    double nc1, nc2, nc3;

    printf("Enter three different numbers: ");
    scanf("%lf %lf %lf", &nc1, &nc2, &nc3);

    if( nc1>=nc2 && nc1>=nc3 )
        printf("%.2f is the largest number.", nc1);

    if( nc2>=nc1 && nc2>=nc3 )
        printf("%.2f is the largest number.", nc2);

    if( nc3>=nc1 && nc3>=nc2 )
        printf("%.2f is the largest number.", nc3);

    return 0;
}
