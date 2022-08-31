#include <stdio.h>
int main()
{
  printf("enter size of an array : ");
  int n;
  scanf(" %d", &n);
  int a[n];
  printf("enter element : \n");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }
  printf("enter  first element  : \n");
  int first;
  scanf(" %d",&first);
  int q;
  for (int i = 0; i < n; i++)
  {
    if (first == a[i])
    {
       q=i;
    }
    
  }
  printf("enter second element  : \n");
  int second;
  scanf(" %d", &second);
  int b;
  for (int i = 0; i < n; i++)
  {
    if (second == a[i])
    {
      b = i;
      break;
    }
    
  }
  int size = b-q;
  printf(" %d\n",size);
  int r=q;
for (int i = 0; i < size; i++)
{
  printf(" %d ",a[r]);
  r++;

}
  

  return 0;
}