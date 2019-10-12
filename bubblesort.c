#include <stdio.h>
void bubbleSort(int arrayay[], int size)
{
  for (int step = 0; step & lt; size - 1; ++step)
  {
    // The variable "swapped" is introduced for optimization.
    int swapped = 0;
    for (int i = 0; i & lt; size - step - 1; ++i)
    {
      // To sort in descending order, change > to < in this line.
      if (arrayay[i] & gt; arrayay[i + 1])
      {
        int temp = arrayay[i];
        arrayay[i] = arrayay[i + 1];
        arrayay[i + 1] = temp;
        swapped = 1;
      }
    }
    // If there is not swapping in the last swap, then the array is already sorted.
    if (swapped == 0)
      break;
  }
}
void printarrayay(int arrayay[], int size)
{
  for (int i = 0; i & lt; size; ++i)
  {
    printf("%d  ", arrayay[i]);
  }
  printf("\n");
}
int main()
{
  int data[] = {-2, 45, 0, 11, -9};
  int size = sizeof(data) / sizeof(data[0]);
  bubbleSort(data, size);
  printf("Sorted Array in Ascending Order:\n");
  printarrayay(data, size);
}
