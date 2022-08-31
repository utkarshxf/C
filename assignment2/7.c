#include <stdio.h>

void Arrange(int *Arr, int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (Arr[i] % 2 == 0 && Arr[j] % 2 != 0)
      {
        int temp = Arr[i];
        Arr[i] = Arr[j];
        Arr[j] = temp;
      }
    }
  }
}

int main()
{
  int Arr[5] = {1, 2, 3, 4, 5};
  Arrange(Arr, 5);
  for (int i = 0; i < 5; i++)
  {
    printf("%d ", Arr[i]);
  }
}