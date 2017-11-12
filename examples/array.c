#include <stdio.h>
#include <stdlib.h>

void main()
{
  int statistics[20];
  int size, i;

  size = 20;
  srand(0);
  for(i = 0; i < size; i++)
    statistics[i] = 0;

  //Let's study the properties of the rand() function.
  //It should generate the uniform distribution, so the number of occurances of
  //each number in [0,20) in long sequence should be approximately the same.
  for(i = 0; i < 1000000; i++)
    statistics[rand() % 20]++;

  for(i = 0; i < size; i++)
    printf("%i\n", statistics[i]);
}
