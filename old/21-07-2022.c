//write a program to crate an array
#include<stdio.h>
int main()
{
  int array[50];
  for (int i = 0; i < 50; i++)
  {
    printf("enter element %d : ", i);
    scanf(" %d", &array[i]);
  }
  printf("-----------------------------------------\n");

  for (int i = 0; i < 50; i++)
  {
    printf("element number %d is :  %d\n",i, array[i]);
  }
  return 0;
}
