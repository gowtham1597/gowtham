#include <stdio.h>
 
int main()
{
  char cha;
 
  printf("Enter a character\n");
  scanf("%c", &cha);
 
  if (cha == 'a' || cha == 'A' || cha == 'e' || cha == 'E' || cha == 'i' || cha == 'I' || cha =='o' || cha =='O' || cha == 'u' || cha == 'U')
  {
    printf("%c is a vowel.\n", cha);
  else
    printf("%c is not a vowel.\n", cha);
  }
  return 0;
}
