#include <stdio.h>

void printInBetween(int Arr[], int n, int a, int b)
{
  int s1 = 0, s2 = 0, x = 0;
  for (int i = 0; i < n; i++)
  {
    if (Arr[i] == a && s2 == 0)
    {
      s1 = 1;
      s2 = 1;
    }
    if (s1 == 1)
    {
      printf("%d ", Arr[i]);
      x++;
    }
    if (s1 == 1 && s2 == 1 && Arr[i] == b)
      s1 = 0;
  }
  printf("\nthere are %d elements", x);
  if (s1 == 1)
    printf("End Limit not found\n");
  else if (s2 == 0 && s1 == 0)
    printf("Start Limit not found\n");
}

int main()
{
  int Arr[50] = {2, 5, 6, 8, 3, 4, 1, 7}, n = 8, a, b;

  // limit from a to b.
  a = 6;
  b = 4;

  printInBetween(Arr, n, a, b);

  return 0;
}