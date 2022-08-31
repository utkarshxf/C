#include <stdio.h>
void main()
{
  int j;
  int sum=0;
  printf("enter size of array\n");
  scanf("%d",&j);
  int array[j];
  printf("Enter values: \n");
  for (int i = 0; i < j; i++)
  {
    scanf("%d",&array[i]);
    sum +=array[i];
  }
  printf("sum is %d\n", sum);
}