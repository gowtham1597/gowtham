#include <stdio.h>

int main()
{
   char s[1000], ch;
   int i, frequency = 0;

   printf("Enter a string: ");
   gets(s);

   printf("Enter a character to find the frequency: ");
   scanf("%c",&ch);

   for(i = 0; s[i] != '\0'; ++i)
   {
       if(ch == s[i])
           ++frequency;
   }

   printf("Frequency of %c = %d", ch, frequency);

   return 0;
}
