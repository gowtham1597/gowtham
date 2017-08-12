#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
int i=0;
int main()
{
    printf("Enter Q to quit !\n");
    while(1)
    {
    i++;
    printf("%d\n",i);
    Sleep(1000);
    system("cls");
    }
    return 0;

}
