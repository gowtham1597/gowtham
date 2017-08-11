#include <stdio.h>  
   
int main()
{  
    int c; 
    printf("Even numbers between 1 to 10\n");  
    for(c = 1; c <= 10; c++)
    {  
        if(c%2 == 0) 
        {
            printf("%d ", c);  
        }  
    }  
   
    return 0;  
} 
