#include <stdio.h>

void removeValue(int *a, int n, int index)
{
  for (int i = index; i < n - 1; i++)
  {
    a[i] = a[i + 1];
  }
}
int main()
{
  int a[] = {1, 22, 45, 74, 68};
  int n = 5;
  printf("enter the element to removed");
  int m;
  scanf("%d", &m);
  int index;
  for (int i = 0; i < n; i++)
  {
    if (a[i] == m)
    {
      index = i;
    }
  }
  removeValue(a, n, index);
  for (int i = 0; i < n - 1; i++)
  {
    printf("%d  ", a[i]);
  }

  return 0;
}