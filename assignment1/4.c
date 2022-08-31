#include <stdio.h>
void sort(int ar[], int n)
{
  for (int x = 1; x <= n ; x++)
  {
    for (int y = 0; y <= n - x; y++)
    {
      if (ar[y] > ar[y + 1])
      {
        int t = ar[y];
        ar[y] = ar[y + 1];
        ar[y + 1] = t;
      }
    }
  }
}
int main()
{
  printf("Enter number of elements in the array : ");
  int n;
  scanf("%d", &n);
  int ar[n];
  // input
  printf("Enter elements seperated by space : ");
  for (int x = 0; x < n; x++)
  {
    scanf("%d", &ar[x]);
  }
  sort(ar, n);
  printf("Elements in asceneding order : ");
  for (int x = 0; x < n; x++)
  {
    printf("%d ", ar[x]);
  }
}