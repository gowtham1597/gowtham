#include <stdio.h>
int main()
{
    char cr;
    printf("Enter a character: ");
    scanf("%cr",&cr);

    if( (cr>='a' && cr<='z') || (cr>='A' && cr<='Z'))
        printf("%c is an alphabet.",cr);
    else
        printf("%c is not an alphabet.",cr);

    return 0;
}
