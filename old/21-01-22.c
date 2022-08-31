/*#include <stdio.h>
int main()
{
  int data[5];

  printf("Enter elements: ");
  for (int i = 0; i < 5; ++i)
    scanf("%d", data + i);

  printf("You entered: \n");
  for (int i = 1; i < 5; i = i + 2)
    printf("%d\n", *(data + i));
  return 0;
}*/

/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
  int a[5], i;
  int *A;
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &a[i]);
  }
  A = &a[0];
  printf("---------------\n");
  for (i = 0; i < 5; i++)
  {
    printf("%d\n", *A + i);
  }
  return 0;
}*/
/*
#include<stdio.h>
int main()
{
  int a;
  int *p;
  p = &a;
  {
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("value of a=%d\n", a);
  }

  return 0;
}*/

// struct vehicle
// {
//   char modelname[3][10];
//   char companyname[3][10];
//   int price[3];
// };

/*#include <stdio.h>

int main()
{

  struct vehicle v;
  struct vehicle *p;
  p = &v;
  printf("enter data");
  int i = 0;
  while (i < 3)
  {
    scanf("%s", p->modelname[i]);
    scanf("%s", p->companyname[i]);
    scanf("%d", &p->price[i]);
    i++;
  }
  printf("you have entered...\n");
  int j = 0;
  while (j < 3)
  {
    printf("%s  %s  %d \n", p->modelname[j], p->companyname[j], p->price[j]);
    j++;
  }
  return 0;
}*/
#include <stdio.h>
int main()
{
  // int hello[10];
  // for (int i = 0; i < 10; i++)

  //   scanf("%d", &hello[i]);

  // printf("-----------\n");

  for (int j = 0; j < 5; j++)

    printf("%d",j);

  return 0;
}