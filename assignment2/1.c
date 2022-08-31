//WAP to reverse the contents of a array of n elements.
#include <stdio.h>
void reverse(int a[], int n)
{
  int count = n / 2;
  for (int i = 0; i < count; i++)
  {
    int k = a[i];
    a[i] = a[n - 1 - i];
    a[n - 1 - i] = k;
  }
}
int main()
{
  int n;
  printf("Enter size of an array :\n");
  scanf("%d",&n);
  int array[n];
  printf("enter value inside array: \n");
  for (int i = 0; i < n; i++)
  {
    scanf(" %d",&array[i]);
  }
  reverse(array, n);

  for (int i = 0; i < n; i++)
  {
    printf(" %d", array[i]);
  }

  return 0;
}
