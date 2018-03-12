#include <stdio.h>
#include <stdlib.h>

int main()
{
  int memSize, idx;
  char* buf, c;

  printf("Enter the size of the buffer: ");
  scanf("%i", &memSize);

  buf = (char*)malloc(memSize*sizeof(char));

  printf("Enter the string to store in buffer: ");

  idx = 0;
  while (idx < memSize)
  {
    c = fgetc(stdin);
    buf[idx] = c;
    idx++;
    if(c == EOF)
      break;
  }

  printf("Stored string:%s\n", buf);

  free(buf);

  return 0;
}
