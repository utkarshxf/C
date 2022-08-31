#include <stdio.h>

int main()
{
printf("enter size of an array : ");
int n;
scanf(" %d",&n);
int a[n];
printf("enter element : \n");
for (int i = 0; i < n; i++)
{
  scanf("%d", &a[i]);
}
int count = n / 2;
for (int i = 0; i < count; i++)
{
  int t;
  t = a[i];
  a[i] = a[n - 1 - i];
  a[n - 1 - i] = t;
}

printf("======================\n");
for (int i = 0; i < n; i++)
{
  printf("%d , ",a[i]);
}
printf("\n======================\n");
}