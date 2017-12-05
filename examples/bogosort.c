#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void printIntArray(const int* array, int size)
{
  int i;
  for(i = 0; i < size - 1; i++)
    printf("%i, ", array[i]);
  printf("%i\n", array[size - 1]);
}

int checkIsOrdered(const int* array, int size)
{
  int i;
  for(i = 0; i < size - 1; i++)
    if(array[i] > array[i+1])
      return 0;

  return 1;
}

void shuffleArray(int* array, int size)
{
  int i, tmp, idx;
  for(i = size - 1; i > 0; i--)
  {
    idx = rand() % (i + 1);
    tmp = array[i];
    array[i] = array[idx];
    array[idx] = tmp;
  }
}

void bogosort(int* array, int size)
{
  while(!checkIsOrdered(array, size))
    shuffleArray(array, size);
}

void main()
{
  int array[20];
  int maxSize, size, i;

  maxSize = sizeof(array) / sizeof(int);

  printf("Enter the size of the array (size <= %i): ", maxSize);
  scanf("%i", &size);

  if(size < 1 || size > maxSize)
  {
    printf("Incorrect array size\n");
    return;
  }

  srand(time(NULL));
  for(i = 0; i < size; i++)
    array[i] = rand() % 1000;

  printf("Unsorted array:\n");
  printIntArray(array, size);

  bogosort(array, size);

  printf("Sorted array:\n");
  printIntArray(array, size);
}
