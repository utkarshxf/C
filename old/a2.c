#include <stdio.h>
int main()
{
  int n, x;
  printf("enter the number of elements to be input");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("enter the element that you want to find:");
  scanf("%d", &x);
  int found = 0;
  for (int i = 0; i < n; i++)
  {
    if (x == a[i])
    {
      found = 1;
      printf("element found at %d index", i);
    }
  }
  if (found == 0)
  {
    printf("not found");
  }
  return 0;
}