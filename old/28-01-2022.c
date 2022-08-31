#include <stdio.h>
int main()
{
  int a;
  int b = 0;
  int var[5];
  printf("enter 5 value\n");
  for (int i = 0; i < 5; i++)
  {
    scanf("%d", &var[i]);
  }
  printf("enter value to search\n");
  scanf("%d", &a);
  for (int j = 0; j < 5; j++)
  {
    if (var[j] == a)
    {
      printf("%d integer is present\n", a);
      printf("%d is present at the %d index \n", a, j);
      b = b + 1;
    }
  }
  if (b == 0)
  {
    printf(" % d is not present\n ", a);
  }
  printf("%d is present %d times\n", a, b);
  return 0;
}