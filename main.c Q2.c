#include <stdio.h>
int main()
{
 char ch;
 printf("enter a character\n");
 scanf("%c",&ch);
  if('ch>=A' && 'ch<=Z')
  printf("character is uppercase\n",ch);
  else if('ch>=a' && 'ch>=z')
  printf("character is lowercase\n",ch);
  else('ch>=0'&&'ch<=9');
  printf("character is digit\n",ch);
  return 0;
}