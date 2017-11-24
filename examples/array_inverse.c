#include <stdio.h>
#include <stdlib.h>

void main()
{
  char letters[21];
  int size, i, tmp;
  size = 20;
  letters[20] = '\0'; // '\0' marks end of the line in C

  srand(1);
  for(i = 0; i < size; i++)
  {
    letters[i] = 97 + rand() % 26; //generate random letters a, b, ..., z. See ASCII table for details
  }

  printf("%s\n", letters);

  for(i = 0; i < size / 2; i++)
  {
    tmp = letters[i];
    letters[i] = letters[size - 1 - i];
    letters[size - 1 - i] = tmp;
  }

  printf("%s\n", letters);
}
