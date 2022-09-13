#include <stdio.h>

char main(void)
{
  char kitty[20];
  printf("What will you like to name your cat?: ");
  scanf("%s",kitty);
  printf("%s is ok!. What else will you like to name your cat? :",kitty);
  scanf("%s",kitty);
  printf("%s too is ok\n",kitty);
  return (0);
}
