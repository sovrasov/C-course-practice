#include <stdio.h>

//the prototype must be declared before first usege
int my_function(int, char);

void main()
{
  int a, result;
  char b;
  result = my_function(a, b);
  printf("Output value of the my_function() is %i\n", result);
}

int my_function(int arg1, char arg2)
{
  return 0;
}
