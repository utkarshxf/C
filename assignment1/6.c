#include <stdio.h>

int search(int *a, int element, int n)
{
  int low = 0;
  int high = n - 1;
  while (high >= low)
  {
    int mid = low + high / 2;
    if (a[mid] == element)
    {
      return mid;
    }
    if (a[mid] > element)
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return 0;
}
int main()
{
  int a[] = {1, 22, 45, 74, 68};
  int n = 5;
  printf("enter the element to search");
  int m;
  scanf("%d", &m);
  int s = search(a, m, n);
  if (s)
  {
    printf("element found");
  }
  else
  {
    printf("element not found");
  }
  return 0;
}