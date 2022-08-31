#include <stdio.h>
int main()
{
  printf("Enter number of elements in the array : ");
  int n;
  scanf("%d", &n);
  int ar[n];
  // input
  int sum = 0, product = 1;
  printf("Enter elements seperated by space : ");
  for (int x = 0; x < n; x++)
  {
    scanf("%d", &ar[x]);
    if (ar[x] % 2 == 0)
    {
      sum += ar[x];
    }
    else
    {
      product *= ar[x];
    }
  }
  printf("Sum of all even numbers is : %d ", sum);
  printf("\nProduct of all odd numbers is %d ", product);
}