#include <stdio.h>
int main()
{
  int n;
  printf("enter the number of elements to be input");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (a[i] > a[j])
      {
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
  printf("the elements in  descending order are:");
  for (int i = n - 1; i > 0; i--)
  {
    printf("%d\n", a[i]);
  }
  return 0;
}