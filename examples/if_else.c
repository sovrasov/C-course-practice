#include <stdio.h>

int main()
{
  int a, b;
  printf("Enter two integer numbers:\n");
  scanf("%i %i", &a, &b);
  if(a > b)
  {
    printf("The first number is greater\n");
  }
  else if(a < b)
    printf("The second number is greater\n");
  else
    printf("The numbers are equal\n");

  return 0;
}
