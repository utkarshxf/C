#include <stdio.h>

void convertToDescending(int *Arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (Arr[i] > Arr[j])
      {
        int a = Arr[i];
        Arr[i] = Arr[j];
        Arr[j] = a;
      }
    }
  }
}

int main()
{

  int Arr[50] = {3, 5, 9, 10, 12}, n = 5;
  for (int i = 0; i < n; i++)
    printf("%d ", Arr[i]);
  convertToDescending(Arr, n);
  printf("\n");
  for (int i = 0; i < n; i++)
    printf("%d ", Arr[i]);
}